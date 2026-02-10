---
title: Alicia 1200 r1.6 – BOM (factory vs user‑soldered)
---

## BOM metadata

- **Green rows** = factory populated (pre-soldered)
- **Gray rows** = optional add-ons when ordering from Enterlogic: **U3, U5, U11, U12, CN8, CN9**
- **Alicia 1200 r2.0 note**: your r2.0 kit/board will include **U3, U5, U11, U12** pre‑programmed (even though they are gray/optional in the r1.6 BOM).
- **White rows** = user must solder (not factory-populated, not optional from Enterlogic)
- Parts listed with manufacturer part numbers plus Digikey/Mouser references.
- Original BOM: `docs/2025-10-08 BOM Alicia 1200 R1_6.pdf`.

---

# PART 1: Factory‑soldered components

These parts are **pre‑populated** by the PCB manufacturer and arrive already soldered.

## 1.1 Capacitors (factory‑soldered)

- **C98, C72, C6, C7, C8, C16, C33, C46, C63, C68, C69, C70, C71, C87, C88, C97, C109, C110, C111, C112, C113, C115, C116, C117, C118, C119**  
  - Value: **0.1 µF 50 V**, X7R, 0603
- **C89, C21, C54, C55, C77, C78, C81, C83**  
  - Value: **0.047 µF 100 V**, ±10 %, X7R, 0603
- **C92**  
  - Value: **20 pF 100 V**, ±5 %, C0G/NP0, 0603
- **C100**  
  - Value: **10 µF 25 V**, ±20 %, X5R, 0805
- **C1, C3, C4, C5, C108**  
  - Value: **1 µF 50 V**, ±10 %, X5R, 0603
- **C2, C9, C13, C14, C15, C18, C19, C20, C29, C30, C34, C36, C37, C40, C41, C43, C44, C47, C48, C49, C50, C51, C52, C53, C56, C57, C58, C59, C65, C67, C96, C120**  
  - Value: **0.22 µF 50 V**, X7R, 0603
- **C114**  
  - Value: **100 pF 50 V**, ±10 %, X7R, 0603
- **C17, C75, C79, C80, C82**  
  - Value: **0.33 µF 50 V**, X5R, 0603
- **C22, C23, C24, C25, C26, C27, C28, C35, C38, C39, C73, C74**  
  - Value: **22 pF 50 V**, ±5 %, C0G/NP0, 0603
- **C31, C32, C45, C42**  
  - Value: **27 pF 50 V**, ±5 %, C0G/NP0, 0603
- **C60**  
  - Value: **0.01 µF 100 V**, ±10 %, X7R, 0603
- **C61, C62, C99, C104, C105**  
  - Value: **0.47 µF 50 V**, ±10 %, X5R, 0603

## 1.2 Resistors (factory‑soldered)

- **R183, R184** – **10 Ω**, 1 %, **½ W**, 1206 SMD
- **R213** – **1 kΩ**, 5 %, **¼ W**, 1206 SMD
- **R259** – **75 Ω**, 1 %, 1206 SMD
- **R218, R243** – **100 Ω**, 1 %, **¼ W**, 0805 SMD
- **R146, R1, R11, R12, R13, R14, R15, R16, R17, R18, R39, R40, R54, R56, R62, R106, R110, R112, R113, R114, R115, R116, R117, R118, R119, R120, R121, R122, R123, R124, R125, R126, R127, R128, R129, R130, R131, R132, R133, R134, R135, R136, R140, R141, R142, R143, R144, R145, R147, R148, R164, R168, R169, R170, R171, R172, R173, R174, R175, R64, R225, R226, R227, R228, R229, R230, R231, R232, R236** – **68 Ω**, 1 %, **1/10 W**, 0603 SMD
- **R271, R272** – **120 Ω**, 1 %, **1/10 W**, 0603 SMD
- **R25, R26, R27, R32, R33, R34, R35, R36, R38, R44, R45, R47, R52, R53, R70, R75, R105, R138, R179, R193, R194, R196, R197, R198, R199, R200, R201, R202, R205, R206, R208, R210, R211, R212, R234, R235, R237, R238, R239, R241, R242, R245, R246, R247, R248, R249, R251, R260, R261, R262, R263, R264, R265, R268, R269, R270, R273, R274, R275, XR5, R149, R150, R139** – **10 kΩ**, 5 %, **1/10 W**, 0603 SMD
- **R2, R3, R4, R5, R6, R7, R8, R9, R28, R29, R30, R31, R61, R63, R68, R71, R72, R73, R76, R78, R79, R80, R81, R82, R83, R84, R85, R86, R109, R163, R165, R180, R188, R191, XR4, R258** – **4.7 kΩ**, 1 %, **1/10 W**, 0603 SMD
- **R19, R20, R21, R22, R23, R24, R37, R57, R58, R59, R60, R152, R240, R244** – **15 Ω**, 1 %, **1/10 W**, 0603 SMD
- **R41, R42, R43, R55, R65, R67, R107, R108, R162, R176, R177, R178** – **27 Ω**, 1 %, **1/10 W**, 0603 SMD
- **R46** – **100 Ω**, 1 %, **1/8 W**, 0603 SMD
- **R48, R49, R50, R137, R216, R217** – **390 Ω**, 5 %, **1/10 W**, 0603 SMD
- **R51, R91, R92, R99, R100, R103, R104, R156, R181, R185, R186, R190, R214, R215, R10** – **1 kΩ**, 1 %, **1/10 W**, 0603 SMD
- **R66, R69, R74, R87, R88, R89, R90, R93, R94, R95, R96, R97, R98, R101, R102, R151, R153, R161, R266, R267** – **470 Ω**, 1 %, **1/10 W**, 0603 SMD
- **R77, R166, R220, R223, R167, R219** – **47 Ω**, 1 %, **1/10 W**, 0603 SMD
- **R222, R224** – **33 Ω**, 1 %, **1/10 W**, 0603 SMD
- **R154, R155, R157** – **49.9 Ω**, 1 %, **1/10 W**, 0603 SMD
- **R158, R159, R160** – **24.9 Ω**, 1 %, **1/10 W**, 0603 SMD
- **R187, R192, R195** – **2.7 kΩ**, 1 %, **1/8 W**, 0603 SMD
- **R189, R207, R209** – **470 kΩ**, 1 %, **1/8 W**, 0603 SMD
- **R203, R204** – **680 Ω**, 1 %, **1/10 W**, 0603 SMD
- **R233** – **200 Ω**, 1 %, **0.5 W**, 0603 thick‑film chip resistor
- **R250, R252, R253, R254, R255, R257, R111, R221, R276** – **75 Ω**, 1 %, **1/8 W**, 0603 SMD
- **R256** – **4.02 kΩ**, 1 %, **1/10 W**, 0603 SMD

## 1.3 Diodes and LEDs (factory‑soldered)

- **D1, D2, D3, D4, D5, D6, D7, D8, D9, D11, D12, D13, D14, D15, D16, D17, D18, D20, D21, D30, D31, D32, D33, D34, D36, D38, D39, D41, D42, D43, D44, D45**  
  - Type: **TVS diode**, 5 V working, 9.2 V clamp, DO‑214AC package
- **D19, D37, D40, D22, D23, D24, D25, D26, D27, D29, D35**  
  - Type: **general‑purpose signal diode**, BAS16, 100 V, 200 mA, SOT‑23‑3 package
- **D46**  
  - Type: **Green LED**, indicator, ~2 V forward, 0805 package

## 1.4 Ferrite beads (factory‑soldered)

- **FB1, FB2, FB3, FB6**  
  - Type: ferrite chip bead, **120 Ω @ 100 MHz**, **4 A**, SMD
- **FB4, FB5**  
  - Type: ferrite bead, **50 Ω @ 100 MHz**, **1206**, **6 A**, **10 mΩ** DC resistance
- **FB7**  
  - Type: ferrite bead, **60 Ω @ 100 MHz**, **0603**, \<30 mΩ DC resistance

## 1.5 Transistors and MOSFETs (factory‑soldered)

- **Q4, Q10, Q11** – N‑channel MOSFETs, **30 V**, **5 A**, SOT‑23 (IR **IRLML6344**)
- **Q12, Q13, Q6** – NPN BJTs, **45 V**, **0.1 A**, SOT‑23 (onsemi **BC847B** family)
- **Q1, Q2, Q3, Q5, Q9, Q14, Q15, Q16** – PNP BJTs, **500 mA**, **45 V**, SOT‑23 (MCC **BC807‑25**)
- **Q7, Q8** – RF JFET / MOSFET devices, **10 V**, SOT‑23‑3 (onsemi)

## 1.6 Jumpers (factory‑soldered)

- **XR2, XR3, XR7, XR9, XR11** – **0 Ω SMD jumpers**, 1/10 W, 0603

## 1.7 ICs (factory‑soldered)

### Logic and interface ICs

- **U2** – 8‑bit parallel‑load shift register, **SN74LS166A**, 16‑SOIC
- **U7** – quad 2‑input XOR gate, **SN74LS86A**, 14‑SOIC
- **U9** – quad 2‑input XOR gate, **SN74F86**, 14‑SOIC
- **U10** – hex non‑inverting buffer/driver, 14‑SOIC
- **U18** – quad 2‑input XOR gate, **74AHCT86**, 14‑SOIC
- **U39** – quad 2‑input OR gate, **SN74LS32**, 14‑SOIC
- **U35, U36, U37, U38** – 8‑bit bus transceivers, 20‑SOIC

### Analog and video ICs

- **U27** – JFET‑input operational amplifier, **TL084**, 14‑SOIC
- **U29** – full‑duplex 3.3 V / 5 V transceiver, 28‑TSSOP
- **U30** – dual SPDT analog switch, **TS5A23159**, 900 mΩ, 10‑VSSOP
- **U31** – 6‑channel video amplifier with filter, 20‑TSSOP
- **U33, U34** – dual 2:1 analog switch, **STG719**, 4 Ω on‑resistance, SOT‑23‑6

---

# PART 2: Components to solder yourself

These parts are **not factory‑populated** and must be soldered by you during assembly.

## 2.1 Resistors (user‑soldered)

- **R182** – **1 Ω**, 1 %, **½ W**, axial (through‑hole)

## 2.2 Capacitors (user‑soldered)

### Electrolytic capacitors

- **C10, C11, C12, C76** – **470 µF 16 V**, ±20 %, aluminium electrolytic, radial, through‑hole
- **C66** – **1000 µF 6.3 V**, ±20 %, aluminium electrolytic, through‑hole
- **C84, C85, C106, C107** – **22 µF 35 V**, ±20 %, aluminium electrolytic, radial, through‑hole
- **C86** – **10 µF 63 V**, ±20 %, aluminium electrolytic, radial, through‑hole

### Film and special capacitors

- **C101, C102** – **3900 pF**, film capacitor, 63–100 V, polypropylene
- **C90, C91, C94, C95** – **6800 pF**, film capacitor, 63–100 V
- **C93** – **10–50 pF**, trimmer capacitor, 100 V, through‑hole
- **C103** – **100 mF 5.5 V** supercap (or optional **330 mF 5.5 V** EDLC alternative), through‑hole

## 2.3 LC filter (user‑soldered)

- **E1** – **LC filter**, 470 pF, through‑hole

## 2.4 ICs (user‑soldered)

### Amiga custom chips

- **U1** – **MC68EC020** CPU, TQFP (Motorola)
- **U4** – custom chip **ALICE** (MOS)
- **U6** – custom chip **AA‑GAYLE** (MOS)
- **U15** – custom chip **LISA** (MOS)
- **U16** – custom chip **BUDGIE 391425** (MOS)
- **U24** – **MOS8364** (Denise‑compatible) video chip, PLCC‑52
- **U25, U26** – **MOS8520** CIAs (complex interface adapters), PLCC‑44

### ROMs and memory

- **U13, U14** – ROM devices (Kickstart), MOS (use with sockets U13/U14 below)
- **U20, U21, U22, U23** – DRAM, **HM514260AJ8** (Hitachi)

### Programmable logic and microcontrollers (optional from Enterlogic)

- **U3** – PLD, **ATF16V8B‑15SU**, 8 macrocell, 15 ns, 20‑SOIC (pre‑programmed; **optional from Enterlogic**)
- **U5** – 8‑bit MCU, **PIC16F627A‑I/SO**, 1.75 KB Flash, 18‑SOIC (pre‑programmed; **optional from Enterlogic**)
- **U11** – 8‑bit MCU, **PIC16F84A**, 1.75 KB Flash, 18‑SOIC (pre‑programmed; variants: **PIC16F84A‑20I/SO** or **PIC16F84A‑04/SO**; **optional from Enterlogic**)
- **U12** – 8‑bit MCU, **ATTINY24A‑SSUR**, 2 KB Flash, 14‑SOIC (Atmel; pre‑programmed; **optional from Enterlogic**)

### Analog and support ICs

- **U8** – voltage supervisor IC, 1‑channel, SOT‑23‑3 (TC54VC4302)
- **U17** – shunt voltage reference IC, fixed **1.235 V**, ±2 %, 20 mA, 8‑SOIC
- **U19** – video DAC / encoder, **ADV101** (Analog Devices)
- **U28** – real‑time clock, **MSM6242B** (OKI)
- **U32** – video switch, SPDT, quad, 16‑TSSOP

## 2.5 Connectors (user‑soldered)

- **CN1** – combined HD15 female + dual PS/2 connector, Norcomp **999‑H15‑PS2L571**
- **CN2, CN3** – DB9 male‑male 0.625" spacing connectors (Joystick / Mouse), Norcomp **189‑009‑613R571**
- **CN4** – left‑channel RCA jack, right‑angle, mono 3.2 mm, CUI **RCJ‑043**
- **CN5** – right‑channel RCA jack, right‑angle, mono 3.2 mm, CUI **RCJ‑042**
- **CN6** – 68‑pin PCMCIA right‑angle through‑hole connector, TE Connectivity **5535653‑1**
- **CN7** – 24‑pin 4.2 mm vertical ATX‑power header, Molex **39306247**
- **CN8** – 120‑pin local‑bus connector, JAE **TX24‑120R‑6ST‑H1E** (MB‑side; **optional from Enterlogic**)
- **CN9** – 50‑pin vertical video‑port connector, JAE **TX24‑50R‑6ST‑H1E** (MB‑side; **optional from Enterlogic**)

## 2.6 Headers (user‑soldered)

- **H1** – 6‑pin 2.00 mm vertical gold receptacle (AVR ISP), Harwin **M22‑7140342**
- **H2** – 10‑pin 2.54 mm vertical gold header (serial port), OST **302‑S101**
- **H4** – 12‑pin 2.54 mm vertical header, 3M
- **H5** – 34‑pin 2.54 mm vertical gold header (floppy), OST **302‑S341**
- **H6** – 22‑pin 2.00 mm vertical header (clock port), Amphenol **57102‑F08‑11ULF** (alt: Würth **62004421121**)
- **H8** – 44‑pin 2.00 mm vertical header (2.5" IDE), Sullins **SBH21‑NBPN‑D22‑ST‑BK**
- **H11** – 26‑pin 2.54 mm vertical header (parallel port), OST **302‑S261**

## 2.7 Switches (user‑soldered)

- **SW1** – 4‑position SPST DIP slide switch, through‑hole (CTS **206‑4**)

## 2.8 Crystals and oscillators (user‑soldered)

- **X1** – 28.37516 MHz clock oscillator module
- **X2** – 4 MHz crystal, ±30 ppm, 20 pF load, 120 Ω ESR, HC‑49/US (CTS **ATS040**)
- **X3** – 32.768 kHz tuning‑fork crystal, 12.5 pF load, cylindrical (Abracon **AB26T‑32.768KHZ**)
- **X4** – 8 MHz crystal, ±30 ppm, 20 pF load, 60 Ω ESR, HC‑49/US (CTS **ATS08A‑E**)

## 2.9 IC sockets (optional, user‑soldered)

- **U13, U14 sockets** – 42‑pin 0.6" IC sockets for ROM chips; primary: Adam Tech **ICM‑642‑1‑GT‑HT**, alternative: 3M 42‑pin DIP socket
- **U28 socket** – 18‑pin DIP IC socket, tin, On‑Shore **ED18DT** (for RTC chip)

---

## Summary

- **Factory‑soldered parts:** All SMD passive components (capacitors, resistors, diodes, ferrites), discrete semiconductors (transistors/MOSFETs), SMD jumpers, and most logic/analog ICs.
- **User‑soldered parts:** Through‑hole capacitors, all connectors/headers, larger ICs (CPU, custom chips, RAM, ROMs), crystals, switches, sockets, and a few discrete support components.

For configuration options (jumper settings, DAC support network rules), see `alicia1200-config-options.md`.
