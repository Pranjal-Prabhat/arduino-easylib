# EASYLIB-ARDUINO

This project is created by Pranjal Prabhat and has the proper license.

## Overview
This project aims to make writing codes for Arduino AVR boards more user-friendly, easy to read, and better understanding.

## Features and Functions

| Function   | Reference and Use                                                                                              | Syntax                                               |
|------------|------------------------------------------------------------------------------------------------------------------|------------------------------------------------------|
| set        | Selects the pinMode of the pin and takes 2 arguments (byte, bool). 1st argument is to select pin and 2nd argument is to set it for input or output. (you can pass {OUTPUT, INPUT, 1, 0}) | `set(pin, mode);`                                    |
| on         | Switches on the selected pin.                                                                                   | `on(pin);`                                           |
| off        | Switches off the selected pin.                                                                                  | `off(pin);`                                          |
| pwm        | Sends PWM signals to the pin. Takes 2 arguments (byte, byte). 1st argument is for pin selection and 2nd is the value at the pin. | `pwm(pin, value);`                                   |
| servo      | Controls a servo motor directly by using a value between 0 to 180 degrees. Takes 2 arguments (byte, byte). 1st argument to send the value, 2nd to select pin. | `servo(value, pin);`                                 |
| sonar      | Controls an ultrasonic sensor directly. Takes 3 arguments (byte, byte, bool{optional}). 1st argument sets trig pin, 2nd sets echo pin, and 3rd (optional) is used to select VCC pin if VCC is connected to digital pin of Arduino. | `sonar(trigPin, echoPin, vccPin = null);`           |

## How to Use
To use this library, include it in your Arduino project and call the mentioned functions as needed for your specific application.

## License
This project is distributed under the specified license. Please refer to the license file for more details.
