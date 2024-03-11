#include <Arduino.h>
#include "easylib.h"


void on(byte pin){
    digitalWrite(pin, 1);
}


void off(byte pin){
    digitalWrite(pin, 0);
}

void set(byte pin, bool value){
    pinMode(pin, value ? OUTPUT : INPUT);
}


void pwm(byte pin , byte value){
    analogWrite(pin, value);
}


void servo(byte degree, byte pin, bool error=false){
    if (degree < 181 && degree > 0){
        degree = degree / 180.0 * 255;
    }
    // Unused error parameter.
}


int sonar(byte trig, byte echo, byte vcc=0){
    if (vcc >0){
    digitalWrite(vcc,1);
}
    digitalWrite(trig,0);
    delayMicroseconds(2);
    digitalWrite(trig,1);
    delayMicroseconds(10);
    digitalWrite(trig,0);
    long duration = pulseIn(echo, HIGH);
    int distance = 0.017 * duration;
    return distance;
}

void ana(byte pin , int variable){
  analogWrite(pin,variable);
}

void ir(byte pin , bool config=0){
  if (config = 0){
  bool var =  digitalRead(pin);
  var = !var;
  return var;
  }
  else{
    bool var =  digitalRead(pin);
    return var;
  }
}

void digiread(byte pin){
  return digitalRead(pin);

}

void anaread(byte pin){
  return analogRead(pin);
}

void l298n(byte array[3],bool arr[3]){
  digitalWrite(array[0],arr[0]);
  digitalWrite(array[1],arr[1]);
  digitalWrite(array[2],arr[2]);
  digitalWrite(array[3],arr[3]);
}

void print(String str) { Serial.print(str); }

void println(String str) { Serial.println(str); }





