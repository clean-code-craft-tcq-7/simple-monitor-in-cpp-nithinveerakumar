#include <assert.h>
#include <iostream>
using namespace std;


bool minBoundaryCheck(float value,float min) {
  return !(value < min); 
}
bool maxBoundaryCheck(float value,float max) {
  return !(value > max);
}
void printWarning(string message) {
  cout<<message<<endl;
}
bool checkTemperature(float temperature)
{
  if( !minBoundaryCheck(temperature,0)) {
    printWarning("Temperature is low");
    return false;
  }
  
  if( !maxBoundaryCheck(temperature,45)) {
    printWarning("Temperature is High");
    return false;
  }
  return true;
}

bool checkStateOfCharge(float soc)
{
  if(!minBoundaryCheck(soc,20))
  {
    printWarning("State of charge is low");
    return false;
  }
  if(!maxBoundaryCheck(soc,80))
  {
    printWarning("State of charge is High");
    return false;
  }
  return true;
}

bool checkChargeRate(float chargeRate)
{
  if(! maxBoundaryCheck(chargeRate,0.8))
  {
    printWarning("Charge rate is High");
    return false;
  }
  return true;
}

bool batteryIsOk(float temperature, float soc, float chargeRate) {
  return (checkTemperature(temperature) && checkStateOfCharge(soc) && checkChargeRate(chargeRate));
}



int main() {
  assert(minBoundaryCheck(10,5) == true);
  assert(minBoundaryCheck(4,5) == false);
  assert(maxBoundaryCheck(20,40) == true);
  assert(maxBoundaryCheck(50,40) == false);
  assert(checkTemperature(50) == false);
  assert(checkTemperature(30) == true);
  assert(checkStateOfCharge(10) == false);
  assert(checkStateOfCharge(75) == true);
  assert(checkChargeRate(2.3) == false);
  assert(checkChargeRate(0.5) == true);
  assert(batteryIsOk(25, 70, 0.7) == true);
  assert(batteryIsOk(50, 85, 0) == false);
}
