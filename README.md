# Arduino Nano Robot Arm

I’m building a four-servo robot arm controlled by an Arduino Nano. This repository contains the code, wiring notes, and progress as I build and test it.

## Parts

- Arduino Nano
- 4 × TowerPro MG996R positional servos
- Regulated 6 V, 10 A external servo power supply
- Planned structure: a lightweight arm kit compatible with MG996R servos

## Servo Pins

| Joint | Nano pin |
|---|---|
| Base | D9 |
| Shoulder | D10 |
| Elbow | D6 |
| Gripper | D5 |

The servos use the external power supply. Its ground connects to Nano GND, and the Nano is powered by USB during testing.

## Progress

- [x] Choose the servos and power supply
- [x] Compile the initial firmware
- [x] Test one servo
- [ ] Test the remaining servos
- [ ] Assemble the arm and calibrate joint limits
- [ ] Add movement controls

## Current Code

The firmware centers each servo at 90° and holds its position. Movement controls and joint limits are still to be added.

## Files

- `firmware/firmware.ino` — servo setup
- `firmware/config.h` — pin assignments and starting angles
