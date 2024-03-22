#ifndef easylib_H
#define easylib_H
#include <Arduino.h>

//Switches on the selected pin. takes an argument of the pin.
void on(byte pin);

//Switches off the selected pin. takes an argument of the pin.
void off(byte pin);

//Sends PWM signals to the pin. Takes 2 arguments (byte, byte). 1st argument is for pin selection and 2nd is the value at the pin.
void pwm(byte pin , byte value);

//Selects the pinMode of the pin and takes 2 arguments (byte, bool). 1st argument is to select pin and 2nd argument is to set it for input or output. (you can pass {OUTPUT, INPUT, 1, 0})
void set(byte pin, bool value);

//Controls a servo motor directly by using a value between 0 to 180 degrees. Takes 2 arguments (byte, byte). 1st argument to send the value, 2nd to select pin.
void servo(byte degree,byte pin,bool error=false);

//Controls an ultrasonic sensor directly. Takes 3 arguments (byte, byte, bool{optional}). 1st argument sets trig pin, 2nd sets echo pin, and 3rd (optional) is used to select VCC pin if VCC is connected to digital pin of Arduino.
int sonar(byte remembered,byte trig=0, byte echo=0, byte vcc=0);

// Sends analog signals to the specified pin. Parameters: pin - The pin to send analog signals. variable - The analog value to be sent (0 to 255).
void ana(byte pin, int variable);

// Reads digital signals from the specified pin. Parameters: pin - The pin to read digital signals. config - Optional configuration parameter (default: 0). If 0, returns the inverted value of the digital signal. If non-zero, returns the raw digital signal. Returns: bool - The digital signal value.
bool ir(byte pin, bool config = false);

// Reads digital signals from the specified pin. Parameters: pin - The pin to read digital signals. Returns: bool - The digital signal value.
bool digiread(byte pin);

// Reads analog signals from the specified pin. Parameters: pin - The pin to read analog signals. Returns: int - The analog signal value (0 to 1023).
int anaread(byte pin);

// Controls an L298N motor driver. Parameters: array - An array containing four pins: [IN1, IN2, IN3, IN4]. arr - An array containing the corresponding control signals for each pin. [IN1_signal, IN2_signal, IN3_signal, IN4_signal].
void l298n(byte array[4], bool arr[4],byte ctrl_pin,byte ctrl_pin2);

// Prints the specified string to the Serial monitor. Parameters: str - The string to be printed.
void print(String str);

// Prints the specified string followed by a newline character to the Serial monitor. Parameters: str - The string to be printed.
void println(String str); 
//initialise the Serial communication by an argument as baud rate.
void serialinit(int init);
//initialise the sonar sensor by giving trig , echo and vcc(optional).Sets pinMode of those pin.
void sonarinit(byte trig_pin,byte echo_pin,byte vcc=-1,bool remember_for_next=false);

// Pauses for the specified number of seconds.
void pause(int number);

// Returns the current time in milliseconds since the Arduino board began running the current program.
void clock();

// Converts minutes to seconds.
void mintosec(int min);

// Calculate distance based on speed and time.
void getdistance(int speed , int time);

// Converts minutes to milliseconds.
void  mintoms(int min);

// Converts seconds to minutes.
void sectomin(int second);

// Converts milliseconds to minutes.
void  mstomin(int ms);

// Converts milliseconds to seconds.
void  mstosec(int ms);

// Converts seconds to milliseconds.
void  sectoms (int second);




#endif
