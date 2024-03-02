# Ultrasonic Sensor with LED Task

Welcome to the Ultrasonic Sensor with LED task! This task demonstrates how to use an ultrasonic sensor with an Arduino to measure distances and control an LED based on the measured distance. When an object is detected at a distance of 40 centimeters or less, the LED will turn on. This task is useful for applications such as proximity sensing and object detection.

## Introduction

The Ultrasonic Sensor with LED task combines the functionality of an ultrasonic sensor and an LED to create a distance-sensitive lighting system. The ultrasonic sensor measures distances using sound waves, while the LED provides visual feedback based on the measured distance. This task is a great way to explore the integration of sensors and actuators in Arduino tasks.

## How it Works

The task works by continuously measuring the distance to an object in front of the ultrasonic sensor. If the measured distance is 40 centimeters or less, the Arduino turns on the LED to indicate the proximity of the object. Otherwise, the LED remains off. This functionality is achieved by reading the distance measured by the ultrasonic sensor and controlling the LED based on the measured value.

## Getting Started

To get started with this task, you will need the following components:

- Arduino board (e.g., Arduino Uno)
- Ultrasonic sensor (e.g., HC-SR04)
- LED
- Jumper wires

## Steps

Follow these steps to set up the task:

1. Connect the VCC pin of the ultrasonic sensor to the 5V pin on the Arduino.
2. Connect the GND pin of the ultrasonic sensor to the GND pin on the Arduino.
3. Connect the TRIG pin of the ultrasonic sensor to a digital pin on the Arduino (e.g., pin 12).
4. Connect the ECHO pin of the ultrasonic sensor to another digital pin on the Arduino ( pin 11).
5. Connect the anode (+) of the LED to a digital pin on the Arduino ( pin 8).
6. Connect the cathode (-) of the LED to the GND pin on the Arduino.
7. Ensure all connections are secure.

| Arduino Pin    | Ultrasonic Sensor Pin | LED             |
| -------------- | ----------------------| --------------- |
| 5V             | VCC                   |                 |
| GND            | GND                   | Cathode (-)     |
| Digital ( 12)  | TRIG                  |                 |
| Digital ( 11 ) | ECHO                  |                 |
| Digital ( 8 )  |                       | Anode (+)       |

## Connection

The following table summarizes the wiring connections between the Arduino, ultrasonic sensor, and LED:

![screen-gif](https://github.com/ItsRawanMoha/Ultrasonic-Sensor-with-LED/blob/main/Ultrasonic%20Sensor%20with%20LEDD.png)

## Output

Once the circuit is set up and the code is uploaded to the Arduino board, the LED will turn on if an object is detected at a distance of 40 centimeters or less.

## Code
```
// defines arduino pins numbers
const int trigPin = 12;
const int echoPin = 11;
const int LEDPin = 7;
long duration;
int distance;
void setup() 
{
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
pinMode(LEDPin, OUTPUT);
Serial.begin(9600); // Starts the serial communication
}
void loop() {
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
digitalWrite(LEDPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
// Calculating the distance
distance= duration*0.034/2;
if (distance <= 40)
{
digitalWrite(LEDPin, HIGH);
}
// Prints the distance on the Serial Monit
Serial.print("Distance from the object = ");
Serial.print(distance);
Serial.println(" cm");
delay(1000);

}
```
## Pictures

<img src="https://github.com/ItsRawanMoha/Ultrasonic-Sensor-with-LED/blob/main/UltraS-with-LEDP.jpeg" alt="Alt text" width="330" height="400">  ![screen-gif](https://github.com/ItsRawanMoha/Ultrasonic-Sensor-with-LED/blob/main/UltraS-with-LEDG.gif)

![screen-gif](https://github.com/ItsRawanMoha/Ultrasonic-Sensor-with-LED/blob/main/UltraSwithLEDO.png)

## Conclusion

The Ultrasonic Sensor with LED task provides a practical demonstration of using an ultrasonic sensor to control an LED based on distance measurements. By understanding the principles behind ultrasonic sensing and LED control, you can explore more advanced applications and tasks involving proximity detection and automation.
