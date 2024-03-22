# EASYLIB-ARDUINO

---
Author: Pranjal Prabhat
---

## Overview
This project aims to make writing codes for Arduino AVR boards more user-friendly, easy to read, and better understanding.

## How to Use
1. **Download the Library:**
   Copy the zip file from this repository or download it.

2. **Open Arduino IDE:**
   Launch the Arduino IDE on your computer.

3. **Navigate to Sketch:**
   Click on "Sketch" in the top menu bar of the Arduino IDE.

4. **Include the Sketch:**
   From the dropdown menu, navigate to "Include Sketch."

5. **Add Zip File:**
   Click on "Add Zip File" in the sub-menu.

6. **Select the Library Zip File:**
   Search for the zip file you downloaded from this repository.
   Select the zip file and press "Open."

7. **Installation:**
   The library will be installed, and you can now use it in your Arduino sketches.

8. **Compile the Sketch:**
   After including the library in your Arduino sketch, compile the sketch using the Arduino IDE. This step is essential as it allows the IDE to recognize and showcase the usage of functions provided by the library.
   
     ```cpp
     #include <easylib.h>
     ```
   - This line includes the `easylib` library in your sketch, allowing you to use its functions.

## Features and Functions

| Function   | Reference and Use                                                                                              | ARGUMENTS                  |
|------------|------------------------------------------------------------------------------------------------------------------|--------------------------|
| `set`      | Selects the pinMode of the pin and takes 2 arguments (byte, bool). 1st argument is to select pin and 2nd argument is to set it for input or output. (you can pass {OUTPUT, INPUT, 1, 0}) | `set(pin, mode)`         |
| `on`       | Switches on the selected pin.                                                                                   | `on(pin)`                 |
| `off`      | Switches off the selected pin.                                                                                  | `off(pin)`                |
| `pwm`      | Sends PWM signals to the pin. Takes 2 arguments (byte, byte). 1st argument is for pin selection and 2nd is the value at the pin. | `pwm(pin, value)`        |
| `servo`    | Controls a servo motor directly by using a value between 0 to 180 degrees. Takes 2 arguments (byte, byte). 1st argument to send the value, 2nd to select pin. | `servo(value, pin)`      |
| `sonar`    | Controls an ultrasonic sensor directly. Takes 3 arguments (byte, byte, bool{optional}). 1st argument sets trig pin, 2nd sets echo pin, and 3rd (optional) is used to select VCC pin if VCC is connected to digital pin of Arduino. | `sonar(trigPin, echoPin, vccPin = null)`           |
| `ana`      | Sends analog signals to the specified pin. Parameters: pin - The pin to send analog signals. variable - The analog value to be sent (0 to 255). | `ana(pin, variable)`     |
| `ir`       | Reads digital signals from the specified pin. Parameters: pin - The pin to read digital signals. config - Optional configuration parameter (default: 0). If 0, returns the inverted value of the digital signal. If non-zero, returns the raw digital signal. Returns: bool - The digital signal value. | `ir(pin, config = false)`|
| `digiread` | Reads digital signals from the specified pin. Parameters: pin - The pin to read digital signals. Returns: bool - The digital signal value. | `digiread(pin)`          |
| `anaread`  | Reads analog signals from the specified pin. Parameters: pin - The pin to read analog signals. Returns: int - The analog signal value (0 to 1023). | `anaread(pin)`           |
| `l298n`    | Controls an L298N motor driver. Parameters: array - An array containing four pins: [IN1, IN2, IN3, IN4]. arr - An array containing the corresponding control signals for each pin. [IN1_signal, IN2_signal, IN3_signal, IN4_signal]. | `l298n(array[3], arr[3])`|
| `print`    | Prints the specified string to the Serial monitor. Parameters: str - The string to be printed. | `print(str)`              |
| `println`  | Prints the specified string followed by a newline character to the Serial monitor. Parameters: str - The string to be printed. | `println(str)`            |
| `sonarinit`| Initializes a sonar sensor setup. Takes 3 arguments (byte, byte, byte). 1st is the trigger pin, 2nd is the echo pin, and 3rd (optional) is VCC pin (default -1). If VCC is provided and greater than -1, sets the VCC pin as OUTPUT. | `sonarinit(trig_pin, echo_pin, vcc)`|
| `serialinit`| Initializes the Serial communication. Takes 1 argument (int) for the desired baud rate. | `serialinit(init)`       |
| `pause`    | Pauses the program execution for a specified duration in seconds. Parameters: number - The duration to pause in seconds. | `pause(number)`          |
| `clock`    | Returns the current time since the program started execution in milliseconds. No parameters. | `clock()`                |
| `mintosec` | Converts minutes to seconds. Parameters: min - The value in minutes to convert to seconds. Returns the converted value in seconds. | `mintosec(min)`          |
| `getdistance` | Calculates the distance traveled given a constant speed and time. Parameters: speed - The constant speed of travel. time - The time taken for travel. Returns the distance traveled. | `getdistance(speed, time)` |
| `mintoms`  | Converts minutes to milliseconds. Parameters: min - The value in minutes to convert to milliseconds. Returns the converted value in milliseconds. | `mintoms(min)`           |
| `sectomin` | Converts seconds to minutes. Parameters: second - The value in seconds to convert to minutes. Returns the converted value in minutes. | `sectomin(second)`       |
| `mstomin`  | Converts milliseconds to minutes. Parameters: ms - The value in milliseconds to convert to minutes. Returns the converted value in minutes. | `mstomin(ms)`            |
| `mstosec`  | Converts milliseconds to seconds. Parameters: ms - The value in milliseconds to convert to seconds. Returns the converted value in seconds. | `mstosec(ms)`            |
| `sectoms`  | Converts seconds to milliseconds. Parameters: second - The value in seconds to convert to milliseconds. Returns the converted value in milliseconds. | `sectoms(second)`        |
| `ledon`    | makes the led of the arduino uno on. | `ledon()`|
| `ledoff`   | makes the led of the arduino uno off.| `ledoff()`|



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
