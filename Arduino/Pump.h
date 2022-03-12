#ifndef PUMP_h
#define PUMP_h

#include "Arduino.h"


class Pump{
private:
  int pin; 
  bool pump_status = false;
public:
  Pump(int new_pin);
  bool get_status();
  void set(bool set);
};

Pump::Pump(int new_pin){
  pin = new_pin;
  pinMode(pin, OUTPUT);
  pump_status = false;
  digitalWrite(pin, LOW);
}

void Pump::set(bool set_to){
  pump_status = set_to;
  if(pump_status == true){
    digitalWrite(pin, HIGH);
    Serial.println("Pump set to on");
  }
  else{
    digitalWrite(pin, LOW);
    Serial.println("Pump set to off");
  }
}

bool Pump::get_status(){
  return  pump_status;
}



#endif