# Pedestrian Crossing Traffic Light System using Arduino

## Overview

This project implements a **Pedestrian Crossing Traffic Light System** using Arduino. The system allows pedestrians to safely cross a road by pressing a push button. Upon receiving a pedestrian request, the vehicle traffic signal changes from green to yellow and then red, allowing pedestrians to cross safely before returning to normal traffic operation.

## Features

* Vehicle traffic light control (Red, Yellow, Green)
* Pedestrian signal control (Red, Green)
* Push-button pedestrian request system
* Button debouncing for reliable operation
* Safe traffic signal transitions
* Automatic return to normal traffic flow after pedestrian crossing

## Components Required

| Component      | Quantity    |
| -------------- | ----------- |
| Arduino Uno    | 1           |
| Red LEDs       | 2           |
| Yellow LED     | 1           |
| Green LEDs     | 2           |
| Push Button    | 1           |
| 330Ω Resistors | 5           |
| Breadboard     | 1           |
| Jumper Wires   | As required |

## Circuit Connections

### Vehicle Traffic Signals

| Arduino Pin | Component          |
| ----------- | ------------------ |
| D8          | Vehicle Red LED    |
| D9          | Vehicle Yellow LED |
| D10         | Vehicle Green LED  |

### Pedestrian Signals

| Arduino Pin | Component            |
| ----------- | -------------------- |
| D11         | Pedestrian Red LED   |
| D12         | Pedestrian Green LED |

### Push Button

| Arduino Pin | Component   |
| ----------- | ----------- |
| D2          | Push Button |

**Note:** The button is configured using `INPUT_PULLUP`, so no external pull-up resistor is required.

## Working Principle

### Normal Operation

* Vehicle Green LED is ON.
* Vehicle Red and Yellow LEDs are OFF.
* Pedestrian Red LED is ON.
* Pedestrian Green LED is OFF.

This indicates that vehicles may proceed while pedestrians must wait.

### Pedestrian Request

When the push button is pressed:

1. The system detects the pedestrian request.
2. Vehicle Green signal turns OFF.
3. Vehicle Yellow signal turns ON for 2 seconds.
4. Vehicle Red signal turns ON.
5. Pedestrian Green signal turns ON for 5 seconds.
6. Pedestrians cross safely.
7. Pedestrian signal returns to Red.
8. Vehicle signal returns to Green.

### Signal Sequence

Vehicle Green
↓
Vehicle Yellow (2 sec)
↓
Vehicle Red (2 sec)
↓
Pedestrian Green (5 sec)
↓
Pedestrian Red
↓
Vehicle Green

## Arduino Code Features

* Uses digital outputs for traffic light control.
* Implements button debouncing using a 50 ms delay.
* Stores pedestrian requests using a Boolean state variable.
* Modular design with a dedicated `pedestriancross()` function.
* Easy to modify signal timing values.

## Applications

* Smart Traffic Management Systems
* Pedestrian Safety Systems
* Smart City Infrastructure
* IoT and Embedded Systems Learning
* Educational Arduino Projects

## Future Enhancements

* Add a buzzer for visually impaired pedestrians.
* Display countdown using a 7-segment display or LCD.
* Use ultrasonic sensors for vehicle detection.
* Implement non-blocking timing using `millis()`.
* Integrate with IoT platforms for remote monitoring.
* Add emergency vehicle priority control.

## Output

### Normal State

* Vehicle Signal: Green
* Pedestrian Signal: Red

### Crossing State

* Vehicle Signal: Red
* Pedestrian Signal: Green

## Conclusion

This project demonstrates the implementation of a pedestrian crossing traffic control system using Arduino. It improves pedestrian safety by providing a controlled crossing mechanism while maintaining efficient vehicle traffic flow. The project serves as an excellent example of embedded systems, digital electronics, and traffic automation concepts.
