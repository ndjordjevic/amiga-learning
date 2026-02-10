---
title: Alicia 1200 r1.6 – Configuration Links, Options and Assembly Notes
---

This document collects **non‑BOM configuration details** that control how Alicia 1200 behaves, but do **not** change the basic list of components (jumpers, solder links, conditional parts, accessories, etc.).

Use this together with `alicia1200-r1_6-bom.md` when assembling and configuring the board.

---

## Quick Reference: XR Jumper Defaults

| Jumper | Function | Default | Notes |
|--------|----------|---------|-------|
| **XR1** | ROM wait‑state | **NC** | Mount only for slower ROMs |
| **XR2, XR3** | Floppy header extras | **Mounted** | Keep as-is (factory) |
| **XR4** | LISA wide mode | **Mounted** | Keep as-is (factory) |
| **XR5** | KB reset pulldown | **NC** | Only for troubleshooting |
| **XR6** | KB reset warning disable | **NC** | Leave open = warning enabled |
| **XR7** | Video filter config | **Mounted** | Part of 18 MHz default |
| **XR8** | Video filter config | **NC** | Part of 18 MHz default |
| **XR9** | Video filter config | **Mounted** | Part of 18 MHz default |
| **XR10** | Reserved | **NC** | ⚠️ **NEVER mount** |

**Legend:**  
- `NC` = Not connected (leave open)  
- `Mounted` = Solder bridge / 0 Ω jumper fitted  
- Factory jumpers (**XR2–XR4, XR7, XR9, XR11**) are pre-soldered

---

## 1. XR Jumpers (detailed)

The `XR` designators are **0 Ω jumpers / solder links** used to configure features.  

### 1.1 XR1 – ROM wait‑state

- **Default:** NC (open)
- **Function:** Adds ROM wait‑states for slower EPROMs/flash chips
- **When to mount:** Only if you experience ROM timing issues or use very slow (>200 ns) EPROMs

### 1.2 XR2, XR3 – Floppy header extra functions

- **Default:** Mounted (factory‑soldered)
- **Function:** Provide additional signals on the floppy header (PC drive compatibility features)
- **Recommendation:** Leave as-is unless following a specific floppy mod guide

### 1.3 XR4 – LISA wide mode

- **Default:** Mounted (factory‑soldered)
- **Function:** Configures LISA for "wide mode" expected by Alicia
- **Recommendation:** Must remain mounted for normal operation

### 1.4 XR5 – Keyboard reset pulldown

- **Default:** NC
- **Function:** Adds a pulldown resistor on the keyboard reset line
- **When to mount:** Only if troubleshooting keyboard reset issues (e.g., spurious resets)

### 1.5 XR6 – Keyboard reset warning disable

- **Default:** NC (warning enabled)
- **Function:** Disables the keyboard reset warning feature
- **When to mount:** If you want to disable the reset warning (not recommended)

### 1.6 XR7–XR9 – Video filter / clock configuration

- **Default:**  
  - **XR7**: Mounted  
  - **XR8**: NC  
  - **XR9**: Mounted  
- **Function:** Selects video filter bandwidth / clock configuration (default = 18 MHz)
- **When to change:** Only if using specific RTG cards with internal VGA output, or following an advanced video mod guide
- **⚠️ Warning:** Incorrect configuration may cause video artifacts or instability

### 1.7 XR10 – Reserved / dangerous

- **Default:** NC
- **⚠️ CRITICAL:** Explicitly marked **"MUST NOT BE MOUNTED"** in documentation
- **Function:** Unknown / test mode / potentially conflicting signal
- **Recommendation:** Leave open unless a trusted, advanced Alicia mod document explicitly requires it

---

## 2. U19 DAC Support Network Configuration

The components around the video DAC at `U19` must match the specific DAC chip used.

### 2.1 Configuration for VP101 (alternative DAC)

| Part | State |
|------|-------|
| **R156** | NC (do not mount) |
| **C64** | NC |
| **U17** | NC (shunt reference not needed) |
| **C63** | **Mounted** |

### 2.2 Configuration for ADV101 (recommended / current choice)

| Part | State |
|------|-------|
| **R156** | **Mounted** |
| **C64** | NC (normally) |
| **U17** | **Mounted** (1.235 V shunt reference) |
| **C63** | **Mounted** |

**Note:** Some DAC variants may require **C64 to be mounted**. If you substitute a different video DAC, check the Alicia documentation or datasheet for the correct support network.

**Status in BOM:**  
- `U17`, `U19` are listed in the **"user‑soldered ICs"** section  
- `C63` is factory‑soldered  
- `R156`, `C64` configuration depends on DAC choice (see above)

---

## 3. Mechanical Accessories

These are **not electrical components** but are needed for a complete mechanical assembly:

### 3.1 PCB standoffs for expansion cards

- **Purpose:** Support turbo accelerators, video cards, or other daughterboards
- **Recommended spec:**  
  - Type: Hex standoff, threaded M3, nylon  
  - Length: **12 mm** (0.472")  
  - Color: Natural (white/translucent)
- **Quantity:** Depends on the number of cards and mounting holes used (typically 4–8 standoffs)
- **Example part:** Würth, Keystone, or generic M3 × 12 mm nylon hex standoff

### 3.2 Other mechanical items (not from BOM)

- Screws for standoffs (M3 × 6 mm or similar)
- Case/enclosure (if building standalone; or fits into A1200 case)
- Heatsinks for CPU (U1) and custom chips (optional but recommended for reliability)

---

## Summary Checklist

Before powering on your assembled Alicia 1200:

- [ ] Verify **XR2–XR4, XR7, XR9** are mounted (factory default)
- [ ] Verify **XR1, XR5, XR6, XR8, XR10** are **open** (NC)
- [ ] Confirm U19 DAC support network matches your DAC chip (ADV101 or VP101)
- [ ] Install mechanical standoffs if using expansion cards
- [ ] Double-check polarity on all electrolytic capacitors and ICs

For assembly order and soldering strategy, see `hardware-learning-plan.md`.
