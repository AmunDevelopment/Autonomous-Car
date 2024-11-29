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

![image](https://github.com/user-attachments/assets/e77a4aa8-30e3-4fbd-a1e5-4c50b566995c)



- Side view

  
![image](https://github.com/user-attachments/assets/b5553903-e966-46bc-8916-6b5912903b7c)



- Back view

  
![image](https://github.com/user-attachments/assets/f94154f1-6328-4ead-ab76-e5de29ab4c03)



- Top view

  
![image](https://github.com/user-attachments/assets/6975483c-e52f-4081-b860-f9f62465e86a)



- General look

  
![image](https://github.com/user-attachments/assets/fe2c1e77-adf5-402f-a3ad-1648e7b5756d)




