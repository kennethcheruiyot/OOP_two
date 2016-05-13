#ifndef car_h
#define car_h

#include <string>
 //forward class reference
 class Driver;

class SteeringWheel{
};

class Car{
  Driver *dere;
  SteeringWheel s_wheel;
  std::string car_type;
public:
  Car(Driver *driver = NULL, std::string ct = "Toyota") :
    dere(driver), car_type(ct){
      Car(driver, "Mercedes");
  }
  std::string whosDriving();
};
#endif