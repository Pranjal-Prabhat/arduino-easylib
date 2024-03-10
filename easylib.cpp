#include <Arduino.h>
#include "easylib.h"

void on(byte pin){
    digitalWrite(a,1);
}

void off(byte pin){
    digitalWrite(b,0);
}

void set(byte pin, bool value){
    pinMode(c,d);
}

void pwm(byte pin , byte value){
    analogWrite(e,f);
}

void servo(byte degree,byte pin,bool error){
    if (degree < 181 && degree > 0){
        degree/180*255;
    }
    if (error = 1){
        
    }
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






