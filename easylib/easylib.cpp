#include <Arduino.h>
#include "easylib.h"


void on(byte pin){
    digitalWrite(pin, 1);
}


void off(byte pin){
    digitalWrite(pin, 0);
}

void set(byte pin, bool value){
    pinMode(pin, value);
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


int sonar(byte trig, byte echo, byte vcc = 0) {
  if (vcc > 0) {
    digitalWrite(vcc, HIGH); 
  }

  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  long duration = pulseIn(echo, HIGH);
  int distance = duration /29/2; // Adjusted formula for better accuracy
  return distance;
}


void ana(byte pin , int variable){
  analogWrite(pin,variable);
}

bool ir(byte pin , bool config=false){
  if (config = false){
  bool var =  digitalRead(pin);
  var = !var;
  return var;
  }
  else{
    bool var =  digitalRead(pin);
    return var;
  }
}

bool digiread(byte pin){
  return digitalRead(pin);

}

int anaread(byte pin){
  return analogRead(pin);
}

void l298n(byte array[4],bool arr[4],byte ctrl_pin1 = 0, byte ctrl_pin2 = 0,byte value1 = 255,byte value2 = 255){
  digitalWrite(array[0],arr[0]);
  digitalWrite(array[1],arr[1]);
  digitalWrite(array[2],arr[2]);
  digitalWrite(array[3],arr[3]);

  if(value1 != 255 && value2 !=255){
    analogWrite(ctrl_pin1,value1);
    analogWrite(ctrl_pin2,value2);
}}

void serialinit(int init){
  Serial.begin(init);
}

void print(String str) {
   Serial.print(String(str)); }

void println(String str){
 Serial.println(String(str));}

void sonarinit(byte trig_pin,byte echo_pin,byte vcc=-1){
  if (vcc>-1){
    pinMode(vcc,OUTPUT);
  }
  pinMode(trig_pin,OUTPUT);
  pinMode(echo_pin,INPUT);
}



