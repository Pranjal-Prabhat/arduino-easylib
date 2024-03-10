#ifndef easylib_H
#define easylib_H
#include <Arduino.h>

void on(byte pin);
void off(byte pin);
void pwm(byte pin , byte value);
void set(byte pin, bool value);
void servo(byte degree,byte pin,bool error);
int sonar(byte trig, byte echo, byte vcc);
void ana(byte pin , int variable);
void ir(byte pin , bool config=0);
void digiread(byte pin);
void anaread(byte pin);
void l298n(byte array[3],bool arr[3]);
void print(string str);
void println(string str);

#endif
