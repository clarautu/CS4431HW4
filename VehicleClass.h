// Vehicle class - header file
// Autumn Clark
// HW 4

#pragma once
#include <string>

class Vehicle {
private:
  int year;
  long int miles;
  int value;
  std::string manufacture;
  std::string model;
public:
  //Constructors
  Vehicle(int year, long int miles, int value,
    std::string manufacture, std::string model);
  Vehicle(); // Default constructor
  // Destructor
  ~Vehicle();
  // Getters
  int GetYear();
  long int GetMiles();
  int GetValue();
  std::string GetManufacture();
  std::string GetModel();
  // Setters
  void SetYear(int year);
  void SetMiles(long int miles);
  void SetValue(int value);
  void SetManufacture(std::string manufacture);
  void SetModel(std::string model);
};
