---
title: Alicia 1200 r1.6 — Parts Procurement Tracker
---

# Alicia 1200 r1.6 — Parts Procurement Tracker

This document tracks what components have been ordered, received, and what still needs to be procured for the Alicia 1200 r2.0 build.

For the complete BOM (all parts, factory-soldered vs user-soldered), see `alicia1200-r1_6-bom.md`.

---

## Parts already ordered / sourced

### Obsolete parts and connectors (from specialist Amiga seller — Flamelily Retro)

**Order confirmed (TBD final total including CN9 and X1)**

- [x] **Chipset** (£300) — Amiga custom chips: ALICE (U4), LISA (U15), AA-GAYLE (U6), BUDGIE (U16), MOS8520 CIA ×2 (U25, U26), MOS8364 Denise (U24)
- [x] **CPU** (£25) — MC68EC020 TQFP (U1) — [Flamelily 68020](https://shop.flamelily.co.uk/68020)
- [x] **RAM** (£22) — 4× HM514260AJ8 DRAM (U20, U21, U22, U23) — [Flamelily Alicia RAM](https://shop.flamelily.co.uk/aliciaram)
- [x] **DAC U19** (£16) — ADV101 (Analog Devices) — [Flamelily Video DAC](https://shop.flamelily.co.uk/dac)
- [x] **U28 RTC** (£5) — MSM6242B (OKI)
- [x] **ROM set (U13, U14)** — free if available (Kickstart ROMs, optional; can also burn your own)
- [x] **CN9** — JAE TX24-50R-6ST-H1E (50-pin video port connector; optional from Enterlogic, sourcing via Flamelily)
- [x] **X1 crystal** — 28.37516 MHz oscillator module (sourcing via Flamelily)

### User-soldered parts (Digi-Key order)

**Capacitors:**
- [x] C10, C11, C12, C76 (4×) — 470 µF 16 V electrolytic (732-8799-1-ND)
- [x] C66 (1×) — 1000 µF 6.3 V electrolytic (1572-1314-ND)
- [x] C84, C85, C106, C107 (4×) — 22 µF 35 V electrolytic (P19678CT-ND)
- [x] C86 (1×) — 10 µF 63 V electrolytic (399-6100-ND)
- [x] C101, C102 (2×) — 3900 pF film (399-PHE426DJ4390JR05-ND)
- [x] C90, C91, C94, C95 (4×) — 6800 pF film (399-19324-ND)
- [x] C93 (1×) — 10–50 pF trimmer (2447-GKG50015-ND)
- [x] C103 (1×) — 100 mF 5.5 V supercap (604-RSCX11045R5F13013U-ND)

**Resistors:**
- [x] R182 (1×) — 1 Ω ½ W axial (BC1.00ZCT-ND)

**LC filter:**
- [x] E1 (1×) — LC filter 470 pF TH (490-9793-1-ND)

**ICs:**
- [x] U8 (1×) — voltage supervisor SOT-23 (TC54VC4302ECB71CT-ND)
- [x] U17 (1×) — shunt voltage reference 1.235 V 8-SOIC (296-35411-1-ND)
- [x] U32 (1×) — video switch SPDT 16-TSSOP (296-17818-1-ND)

**Connectors:**
- [x] CN8 (1×) — 120-pin local bus (670-1368-ND)
- [x] CN7 (1×) — 24-pin ATX power (23-0039306247-ND)
- [x] CN1 (1×) — HD15 + dual PS/2 (999-H15FA-ND)
- [x] CN2, CN3 (1×) — DB9 male-male joystick/mouse (1009MME-ND)
- [x] CN4 (1×) — RCA jack left (CP-1420-ND)
- [x] CN5 (1×) — RCA jack right (CP-1419-ND)
- [x] CN6 (1×) — 68-pin PCMCIA (A113952-ND)

**Headers:**
- [x] H8 (1×) — 44-pin 2 mm IDE (S9025-ND)
- [x] H2 (1×) — 10-pin serial (ED1543-ND)
- [x] H5 (1×) — 34-pin floppy (ED10528-ND)
- [x] H6 (1×) — 22-pin 2 mm clock port (609-5095-ND)
- [x] H11 (1×) — 26-pin parallel (ED10526-ND)
- [x] H1 (1×) — 6-pin AVR ISP (952-1357-5-ND)
- [x] H4 (1×) — 12-pin header (3M9457-12-ND)

**Switch:**
- [x] SW1 (1×) — 4-position DIP switch (CT2064-ND)

**Crystals:**
- [x] X2 (1×) — 4 MHz crystal (CTX402-ND)
- [x] X3 (1×) — 32.768 kHz crystal (535-9032-ND)
- [x] X4 (1×) — 8 MHz crystal (CTX1054-ND)

**IC sockets:**
- [x] U13, U14 (2×) — 42-pin ROM sockets (2057-ICM-642-1-GT-HT-ND)

---

## Parts not yet ordered

### Sockets

- [ ] **U28 socket** — On-Shore ED18DT (18-pin DIP socket for MSM6242B RTC)  
  → [Digi-Key](https://www.digikey.se/en/products/detail/on-shore-technology-inc/ED18DT/4147597)

### Optional Enterlogic parts (gray items in BOM)

These parts are **optional add-ons** when ordering the Alicia 1200 board from Enterlogic:

- [x] **CN8** (120-pin local bus connector) — **already ordered separately from Digi-Key** (670-1368-ND)

### Programmable ICs (included with Alicia 1200 r2.0 kit)

For the **Alicia 1200 r2.0** kit/board you’re getting, these are included **pre‑programmed** (no separate ordering needed):

- [x] **U3** — ATF16V8B-15SU (PLD, pre-programmed; gray item in r1.6 BOM)
- [x] **U5** — PIC16F627A-I/SO (MCU, pre-programmed; gray item in r1.6 BOM)
- [x] **U11** — PIC16F84A-20I/SO or PIC16F84A-04/SO (MCU, pre-programmed; gray item in r1.6 BOM)
- [x] **U12** — ATTINY24A-SSUR (MCU, pre-programmed; gray item in r1.6 BOM)

**Note:** Factory-soldered SMD parts (resistors, capacitors, diodes, ferrites, transistors, logic ICs) are pre-populated by the PCB manufacturer
