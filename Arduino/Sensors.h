#ifndef SENSORS_H
#define SENSORS_H

#include "Pump.h"

class Sensors{
private:
  int pin;
  float data;
  String type;
  bool warning = false;
  
public:
  Sensors(String sensor_type, int new_pin); 
  String get_type();
  void set_data(float input);
  float get_data();
};

Sensors::Sensors(String sensor_type, int new_pin){
  pin = new_pin;
  type = sensor_type;
  data = 0;
  Serial.print("Created sensor ");
  Serial.println(type);
}

String Sensors::get_type(){
  Serial.print("Type: ");
  Serial.println(type);
  return type;
}

void Sensors::set_data(float input){
  data = input;
  // Based off of the type, do the correct conversion
  // Set the input as the converte input
  // Check the pump warning
}

float Sensors::get_data(){
  Serial.print("Data: ");
  Serial.println(data);
  return data;
}


#endif 