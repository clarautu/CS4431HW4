// Truck Class - source file
// Autumn Clark
//

#include <string>
#include <iostream>
#include "TruckClass.h"

// Constructors
Truck::Truck(int year, long int miles, int value, std::string manufacture,
   std::string model, bool awd, int towing_capacity):
   Vehicle(year, miles, value, manufacture, model), awd(awd), towing_capacity(towing_capacity)
{}
Truck::Truck() :
   Vehicle(), awd(true), towing_capacity(5000)
{}

// Detructor
Truck::~Truck()
{}

// Getters
bool Truck::GetAWD(){return awd;}
int Truck::GetTowingCapacity(){return towing_capacity;}

// Setters
void Truck::SetAWD(bool a){awd = a;}
void Truck::SetTowingCapacity(int tc){towing_capacity = tc;}
