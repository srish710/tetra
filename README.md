# TETRA — HATCHLINGS Robot

ESP32-based differential-drive robot being developed for the TURTLE HATCHLINGS cube-collection and stacking challenge.

> **Status:** mechanical planning and early firmware prototyping. Designs and pin assignments are not yet validated.

## Project goals

- Collect one 2.5 × 2.5 × 2.5 in cube at a time outside the Team Zone.
- Transport cubes to the Team Zone and prototype vertical stacking.
- Build a lightweight gripper and lift, measure reliability, and integrate sensor data.

## Hardware

- ESP32-WROOM-32D controller (verify development-board model)
- L298N driver and 2 TT DC drive motors
- 2 SG90 servos (gripper and lift candidates)
- HC-SR04 distance sensor, MPU6050 IMU, AS5600 magnetic encoder
- 7.2 V 2200 mAh NiMH battery and regulated 5 V buck converter

## Engineering concepts

- **Drive:** two-wheel differential drive with passive third support
- **Gripper:** one-servo, two-jaw gripper; compare sliding parallel jaws and pivoting jaws
- **Lift:** four-bar linkage versus guided cable-winch elevator; check torque and required cube clearance before selecting

## Repository

- `firmware/` — PlatformIO / Arduino C++ starter
- `cad/` — editable chassis, gripper and lift models
- `electronics/` — preliminary electrical planning and pin map
- `docs/` — requirements and engineering tradeoffs
- `tests/` — validation plans and observations
- `media/` — project images

## Firmware quick start

1. Install VS Code and the PlatformIO IDE extension.
2. Open `firmware/` as the PlatformIO project.
3. Verify the exact ESP32 development board and update `platformio.ini` if necessary.
4. Connect only the ESP32 by USB; build and upload, then open Serial Monitor at 115200 baud.
5. Confirm that TETRA's serial heartbeat appears every second.

## Safety

Use regulated external 5 V power for servos; do not power them from an ESP32 GPIO. ESP32 GPIOs are 3.3 V logic; level-shift a 5 V ultrasonic ECHO signal before connecting. Tie controller, driver, and supply grounds together. Never connect the 7.2 V battery directly to the bare ESP32 module. Verify motor-driver jumper settings before powering motors.

## Milestones

- [x] Inventory and early mechanical concept research
- [ ] Confirm development board and preliminary wiring
- [ ] Design and test gripper mechanism
- [ ] Design and load-test lift linkage
- [ ] Assemble and test drive chassis
- [ ] Integrate sensors
- [ ] Complete one-cube pickup-and-return
- [ ] Demonstrate two-cube stacking

Hardware and mechanical designs are prototypes until tested.