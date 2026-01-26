#!/usr/bin/env python3
"""OCR quality heuristics for a PDF via pdftotext. Requires poppler (pdftotext, pdfinfo)."""

import re
import subprocess
import sys
from pathlib import Path


def run(cmd: list[str]) -> str:
    r = subprocess.run(cmd, capture_output=True, text=True, timeout=120)
    r.check_returncode()
    return r.stdout or ""


def get_page_count(pdf: Path) -> int:
    out = run(["pdfinfo", str(pdf)])
    for line in out.splitlines():
        if line.startswith("Pages:"):
            return int(line.split(":", 1)[1].strip())
    raise SystemExit("pdfinfo: could not get page count")


def extract_page(pdf: Path, page: int) -> str:
    return run(["pdftotext", "-f", str(page), "-l", str(page), "-layout", str(pdf), "-"])


def repeated_same_char(s: str, min_len: int = 5) -> int:
    """Count substrings of min_len+ same character (e.g. 'sssss', 'ccccc')."""
    n = 0
    i = 0
    while i < len(s):
        c = s[i]
        j = i
        while j < len(s) and s[j] == c:
            j += 1
        if j - i >= min_len and c not in " \n\t":
            n += (j - i) - min_len + 1
        i = j
    return n


def leader_filler_ratio(line: str) -> float:
    """Fraction of non-space chars that are 's', 'c', or 'e' (ToC dotted-leader OCR junk)."""
    t = "".join(c for c in line if c not in " \t")
    if not t:
        return 0.0
    fill = sum(1 for c in t if c in "sce")
    return fill / len(t)


def suspicious_token_ratio(text: str) -> float:
    """Fraction of tokens that look like OCR errors (@, €, odd caps)."""
    tokens = re.findall(r"[^\s]+", text)
    if not tokens:
        return 0.0
    bad = 0
    for t in tokens:
        if "@" in t or "€" in t:
            bad += 1
        elif re.search(r"[A-Z][a-z]*[A-Z][a-z]*[A-Z]|[a-z][A-Z]{2,}", t):  # MCMOTY, CHUIPS, etc.
            bad += 1
    return bad / len(tokens)


def symbol_density(text: str) -> float:
    """Fraction of chars that are non-alphanumeric, non-space."""
    t = text.replace(" ", "").replace("\n", "").replace("\t", "")
    if not t:
        return 0.0
    sym = sum(1 for c in t if not c.isalnum())
    return sym / len(t)


def main() -> None:
    pdf = Path(sys.argv[1]) if len(sys.argv) > 1 else None
    if not pdf or not pdf.is_file():
        print("Usage: ocr_quality_check.py <path-to-pdf>", file=sys.stderr)
        sys.exit(1)

    n = get_page_count(pdf)
    print(f"PDF: {pdf.name}")
    print(f"Pages: {n}\n")

    page_scores = []
    for p in range(1, n + 1):
        raw = extract_page(pdf, p)
        lines = [ln for ln in raw.splitlines() if ln.strip()]

        # Heuristics
        filler_lines = sum(1 for ln in lines if leader_filler_ratio(ln) > 0.5)
        filler_ratio = filler_lines / len(lines) if lines else 0.0
        repeat_count = repeated_same_char(raw)
        repeat_density = repeat_count / len(raw) if raw else 0.0
        susp = suspicious_token_ratio(raw)
        sym = symbol_density(raw)

        # Simple aggregate: higher = worse
        score = 0.4 * filler_ratio + 0.2 * min(1.0, repeat_density * 50) + 0.2 * susp + 0.2 * min(1.0, sym * 3)
        page_scores.append((p, score, filler_ratio, repeat_density, susp, sym, len(raw)))

    # Summary
    avg = sum(s[1] for s in page_scores) / len(page_scores)
    worse = sorted(page_scores, key=lambda x: -x[1])[:15]
    better = sorted(page_scores, key=lambda x: x[1])[:10]

    print("Overall OCR-quality score (0=best, 1=worst): {:.3f}".format(avg))
    print("\nWorst 15 pages (likely ToC, tables, or bad OCR):")
    print("  Page  Score  Filler  Repeat   Susp   Sym")
    for p, sc, fl, rp, su, sy, _ in worse:
        print(f"  {p:4}  {sc:.3f}  {fl:.2f}   {rp:.4f}  {su:.2f}  {sy:.2f}")

    print("\nBest 10 pages (likely clean body text):")
    print("  Page  Score  Filler  Repeat   Susp   Sym")
    for p, sc, fl, rp, su, sy, _ in better:
        print(f"  {p:4}  {sc:.3f}  {fl:.2f}   {rp:.4f}  {su:.2f}  {sy:.2f}")

    print("\nMetrics: Filler=fraction of lines that are s/c/e junk, Repeat=repeated-char density,")
    print("         Susp=suspicious tokens (@/€/weird caps), Sym=symbol density.")


if __name__ == "__main__":
    main()
