# Electronics

Pin assignments are not finalized. Refer to pin-map.csv.

**Power concept (not yet hardware-validated):**
- 7.2 V NiMH battery to the L298N motor supply, subject to motor and board ratings.
- Battery to buck converter, adjusted and measured at 5 V before connecting loads.
- External regulated 5 V for both SG90 servos. Confirm adequate peak current.
- ESP32 development-board power input must be checked against exact board revision.
- All grounds must be common.
- Level shift/divide an HC-SR04 5 V ECHO before connecting to ESP32 GPIO.
- Never apply raw 7.2 V to a bare ESP32 module.
