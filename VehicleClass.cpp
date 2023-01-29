// Vehicle class - source file
// Autumn Clark
// HW 4

#include <iostream>
#include <string>
#include "VehicleClass.h"

// Constructors
Vehicle::Vehicle(int year, long int miles, int value,
   std::string manufacture, std::string model):
   year(year), miles(miles), value(value), manufacture(manufacture), model(model)
   {
     // This test code clutters code, so it has been commented out
     //std::cout << "Constructing " << manufacture << " " << model << std::endl;
   }
Vehicle::Vehicle():
year(2015), miles(60000), value(20000), manufacture("Chevy"), model("Colorado")
{
  std::cout << "Constructing default " << manufacture << " " << model << std::endl;
}

// Destructor
Vehicle::~Vehicle()
{
  // This test code clutters code, so it has been commented out
  //std::cout << "Destructing " << manufacture << " " << model << std::endl;
}

// Getters
int Vehicle::GetYear(){return year;}
long int Vehicle::GetMiles(){return miles;}
int Vehicle::GetValue(){return value;}
std::string Vehicle::GetManufacture(){return manufacture;}
std::string Vehicle::GetModel(){return model;}

// Setters
void Vehicle::SetYear(int y){year = y;}
void Vehicle::SetMiles(long int m){miles = m;}
void Vehicle::SetValue(int v){value = v;}
void Vehicle::SetManufacture(std::string m){manufacture = m;}
void Vehicle::SetModel(std::string m){model = m;}
