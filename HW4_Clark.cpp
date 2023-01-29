// HW 4
// Autumn Clark
//

#include <iostream>
#include <string>
#include <vector>
#include "VehicleClass.h"
#include "TruckClass.h"

// Method that creates default and custom vehicles and trucks
// Then demonstrates the getters and setters work for all
void ShowClassMethods(){
  // Demonstrate the vehicle class getters and setters
  Vehicle v1 = Vehicle();
  Vehicle v2 = Vehicle(2014, 80000, 15000, "Mazda", "3i Grand Touring");
  std::cout << "Constructing " << v2.GetManufacture() << " " << v2.GetModel() << std::endl;
  std::cout << "v2's year: " << v2.GetYear() << std::endl; // Get year
  v2.SetYear(2016); // Set year
  std::cout << "v2's year: " << v2.GetYear() << std::endl; // Show that year changed
  std::cout << "v2's miles: " << v2.GetMiles() << std::endl; // Get miles
  v2.SetMiles(40000); // Set miles
  std::cout << "v2's miles: " << v2.GetMiles() << std::endl; // Show that miles changed
  std::cout << "v2's value: " << v2.GetValue() << std::endl; // Get value
  v2.SetValue(20000); // Set value
  std::cout << "v2's value: " << v2.GetValue() << std::endl; // Show that value changed
  std::cout << "v2's manufacture: " << v2.GetManufacture() << std::endl; // Get manufacture
  v2.SetManufacture("Kia"); // Set manufacture
  std::cout << "v2's manufacture: " << v2.GetManufacture() << std::endl; // Show that manufacture changed
  std::cout << "v2's model: " << v2.GetModel() << std::endl; // Get model
  v2.SetModel("Soul"); // Set model
  std::cout << "v2's model: " << v2.GetModel() << std::endl; // Show that model changed

  // Demonstrate truck class -- only the year getters and setters are
  // tested; The other inheritated getters and setters are not tested
  // again as they are tested in the above code for the base class
  Truck t1 = Truck();
  Truck t2 = Truck(2000, 180000, 8000, "Chevy", "Silverado", true, 6000);
  std::cout << "Constructing " << t2.GetManufacture() << " " << t2.GetModel() << std::endl;
  std::cout << "t2's year: " << t2.GetYear() << std::endl; // Get year
  t2.SetYear(2016); // Set year
  std::cout << "t2's year: " << t2.GetYear() << std::endl; // Show that year changed
  std::cout << "t2's awd: " << t2.GetAWD() << std::endl; // Get AWD
  t2.SetAWD(false); // Set AWD
  std::cout << "t2's awd: " << t2.GetAWD() << std::endl; // Show that AWD changed
  std::cout << "t2's towing capacity: " << t2.GetTowingCapacity() << std::endl; // Get towing capacity
  t2.SetTowingCapacity(3000); // Set towing capacity
  std::cout << "t2's towing capacity: " << t2.GetTowingCapacity() << std::endl; // Show that towing capacity changed
}

// Method that demonstrates a truck's methods
void DisplayTruck(Truck t, int num){
  std::cout << "t" << num <<"'s year: " << t.GetYear() << std::endl; // Get year
  std::cout << "t" << num <<"'s miles: " << t.GetMiles() << std::endl; // Get miles
  std::cout << "t" << num <<"'s value: " << t.GetValue() << std::endl; // Get value
  std::cout << "t" << num <<"'s manufacture: " << t.GetManufacture() << std::endl; // Get manufacture
  std::cout << "t" << num <<"'s model: " << t.GetModel() << std::endl; // Get model
  std::cout << "Does t" << num <<" have AWD: " << (t.GetAWD()?"True":"False") << std::endl; // Get awd
  std::cout << "t" << num <<"'s towing capacity: " << t.GetTowingCapacity() << std::endl; // Get towing capacity
  std::cout << std::endl;
}

int main(){
  // The below code demstrates the getters and setters of the vehicle and truck classes
  //ShowClassMethods();
  
  std::vector<Truck> trucks; // Create a vector of trucks
  // Add five trucks to the vector
     // Truck general info pulled from cars.com ; towing capacity was Googled and then the rough middle for the range was taken
  trucks.push_back(Truck(2019,19850,39290,"Chevy","Silverado 1500 LT",true,8300));
  trucks.push_back(Truck(2017,17647,45998,"Chevy","Silverado 2500 LTZ",true,13750));
  trucks.push_back(Truck(2018,33549,46995,"Ford","F-150 Lariat",true,6000));
  trucks.push_back(Truck(2018,40052,37960,"Ram","1500 Laramie",true,6200));
  trucks.push_back(Truck(2016,98820,47470,"GMC","Sierra 2500 Denali",true,13000));

  // loop through trucks and call DisplayTruck() on each
  for(int i = 0; i < trucks.size(); i++) {
    DisplayTruck(trucks.at(i), (i+1));
  }

  return 0;
}
