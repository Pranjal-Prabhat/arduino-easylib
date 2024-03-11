# EASYLIB-ARDUINO

This project is created by Pranjal Prabhat and has the proper license.

## Overview
This project aims to make writing codes for Arduino AVR boards more user-friendly, easy to read, and better understanding.

## Features and Functions

| Function | Reference and Use                                                                                              | Syntax                   |
|----------|------------------------------------------------------------------------------------------------------------------|--------------------------|
| `set`    | Selects the pinMode of the pin and takes 2 arguments (byte, bool). 1st argument is to select pin and 2nd argument is to set it for input or output. (you can pass {OUTPUT, INPUT, 1, 0}) | `set(pin, mode);`        |
| `on`     | Switches on the selected pin.                                                                                   | `on(pin);`               |
| `off`    | Switches off the selected pin.                                                                                  | `off(pin);`              |
| `pwm`    | Sends PWM signals to the pin. Takes 2 arguments (byte, byte). 1st argument is for pin selection and 2nd is the value at the pin. | `pwm(pin, value);`       |
| `servo`  | Controls a servo motor directly by using a value between 0 to 180 degrees. Takes 2 arguments (byte, byte). 1st argument to send the value, 2nd to select pin. | `servo(value, pin);`     |
| `sonar`  | Controls an ultrasonic sensor directly. Takes 3 arguments (byte, byte, bool{optional}). 1st argument sets trig pin, 2nd sets echo pin, and 3rd (optional) is used to select VCC pin if VCC is connected to digital pin of Arduino. | `sonar(trigPin, echoPin, vccPin = null);`           |
| `ana`    | Sends analog signals to the specified pin. Parameters: pin - The pin to send analog signals. variable - The analog value to be sent (0 to 255). | `ana(pin, variable);`    |
| `ir`     | Reads digital signals from the specified pin. Parameters: pin - The pin to read digital signals. config - Optional configuration parameter (default: 0). If 0, returns the inverted value of the digital signal. If non-zero, returns the raw digital signal. Returns: bool - The digital signal value. | `ir(pin, config = false);` |
| `digiread` | Reads digital signals from the specified pin. Parameters: pin - The pin to read digital signals. Returns: bool - The digital signal value. | `digiread(pin);`         |
| `anaread`  | Reads analog signals from the specified pin. Parameters: pin - The pin to read analog signals. Returns: int - The analog signal value (0 to 1023). | `anaread(pin);`          |
| `l298n`   | Controls an L298N motor driver. Parameters: array - An array containing four pins: [IN1, IN2, IN3, IN4]. arr - An array containing the corresponding control signals for each pin. [IN1_signal, IN2_signal, IN3_signal, IN4_signal]. | `l298n(array[4], arr[4]);` |
| `print`    | Prints the specified string to the Serial monitor. Parameters: str - The string to be printed. | `print(str);`                  |
| `println`  | Prints the specified string followed by a newline character to the Serial monitor. Parameters: str - The string to be printed. | `println(str);`                |

## How to Use
To use this library, include it in your Arduino project and call the mentioned functions as needed for your specific application.

## License
Software License Agreement (BSD License)

Copyright (c) 2012, Easylib Industries
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
1. Redistributions of source code must retain the above copyright
notice, this list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright
notice, this list of conditions and the following disclaimer in the
documentation and/or other materials provided with the distribution.
3. Neither the name of the copyright holders nor the
names of its contributors may be used to endorse or promote products
derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
