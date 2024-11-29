# AutonomousCar
Fully autonomous car that avoids obstacles using ultrasonic system.
# Overview
This project implements autonomous driving car.The car has ultrasonic sensors to measure the distance by using ultrasonic waves which helps the car to avoid obstacles when the distance is within a certain range.The car's system is composed of various hardware components including Cytron motor drivers,step down converter,brushed motors (8kg), servo, ultrasonic sensors,and 12Volts lithium battery.The Microcontroller unit we used to program the car is ATMEGA128.
# Hardware Components
- Servo: Used to change the direction of ultrasonic sensors.
- Brushed motors: motors responsible for operating the car's wheels.
- Ultrasonic sensors: Measures the distance between the car and the object infornt of it.
- Cytron motor drivers: It enables bidirectional control of two high-power DC motor from 6V to 30V without heatsink.
- Step down converter: DC-to-DC converter which decreases voltage, while increasing current, from its input (supply) to its output (load).
- ATMEGA128: AVR microcontroller chip.
# Folder Structure
```
📦 autonomousCar
├─ HAL                        # Hardware Abstraction Layer
│  ├─ MOTORS
│  │  ├─ inc
│  │  │  └─ MOTORS.H
│  │  └─ src
│  │     └─ MOTORS.C
│  ├─ SERVO
│  │  ├─ inc
│  │  │  └─ SERVO.H
│  │  └─ src
│  │     └─ SERVO.C
│  └─ UltraSonic
│     ├─ inc
│     │  └─ UltraSonic.h
│     └─ src
│        └─ UltraSonic.c
└─ MCAL                      # Software Abstraction Layer
   ├─ DIO
   │  ├─ inc
   │  │  └─ DIO.H
   │  └─ src
   │     └─ DIO.C
   └─ TIMERS
      ├─ inc
      │  └─ TIMERS.H
      └─ src
         └─ TIMERS.C
```

# Chassis Design
- Front view

![image](https://github.com/user-attachments/assets/cf6a438e-320d-46c9-b412-efd52fb5054a)


- Side view

  
![image](https://github.com/user-attachments/assets/8634fe86-1372-40be-89a2-dc7f8688e260)


- Back view

  
![image](https://github.com/user-attachments/assets/fe439968-69c8-4eea-bd61-ba5d3c33a311)


- Top view

  
![image](https://github.com/user-attachments/assets/13198705-588c-43c8-84cb-384399ae0be3)


- General look

  
![image](https://github.com/user-attachments/assets/f411d32e-486d-49b0-aa89-8d5a19d9712d)



