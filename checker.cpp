#include "chargeRate.hpp"
#include <assert.h>
using namespace std;
using namespace bms;
int main()
{
  /*-----------------Temperature validation ------------------*/
  BMS* ObjTemperature_low = new Temperature(0);
  assert(ObjTemperature_low->isOk() == false);
  BMS* ObjTemperature_minWarn = new Temperature(2);
  assert(ObjTemperature_minWarn->isOk() == false);
  BMS* ObjTemperature_normal = new Temperature(5);
  assert(ObjTemperature_normal->isOk() == true);
  BMS* ObjTemperature_maxWarn = new Temperature(44);
  assert(ObjTemperature_maxWarn->isOk() == false);
  BMS* ObjTemperature_max = new Temperature(50);
  assert(ObjTemperature_max->isOk() == false);
  /*-----------------SOC validation ------------------*/
  BMS* Objsoc_low = new SOC(0);
  assert(Objsoc_low->isOk() == false);
  BMS* Objsoc_minWarn = new SOC(23);
  assert(Objsoc_minWarn->isOk() == false);
  BMS* Objsoc_normal = new SOC(30);
  assert(Objsoc_normal->isOk() == true);
  BMS* Objsoc_maxWarn = new SOC(77);
  assert(Objsoc_maxWarn->isOk() == false);
  BMS* Objsoc_max = new SOC(81);
  assert(Objsoc_max->isOk() == false);
   /*-----------------Charge Rate validation ------------------*/
  BMS* Objcr_low = new ChargeRate(0);
  assert(Objcr_low->isOk() == false);
  BMS* Objcr_minWarn = new ChargeRate(0.03);
  assert(Objcr_minWarn->isOk() == false);
  BMS* Objcr_normal = new ChargeRate(0.5);
  assert(Objcr_normal->isOk() == true);
  BMS* Objcr_maxWarn = new ChargeRate(0.77);
  assert(Objcr_maxWarn->isOk() == false);
  BMS* Objcr_max = new ChargeRate(0.9);
  assert(Objcr_max->isOk() == false);
  //############################ GERMAN #########################
    /*-----------------Temperature validation ------------------*/
  BMS* GobjTemperature_low = new Temperature(0);
  GobjTemperature_low->setLanguage(new German());
  assert(GobjTemperature_low->isOk() == false);
  BMS* GobjTemperature_minWarn = new Temperature(2);
  GobjTemperature_minWarn->setLanguage(new German());
  assert(GobjTemperature_minWarn->isOk() == false);
  /*-----------------SOC validation ------------------*/
  BMS* Gobjsoc_low = new SOC(0);
  Gobjsoc_low->setLanguage(new German());
  Gobjsoc_low->isOk();
  BMS* Gobjsoc_minWarn = new SOC(23);
  Gobjsoc_minWarn->setLanguage(new German());
  Gobjsoc_minWarn->isOk();
   /*-----------------Charge Rate validation ------------------*/
  BMS* Gobjcr_low = new ChargeRate(0);
  Gobjcr_low->setLanguage(new German());
  Gobjcr_low->isOk();
  BMS* Gobjcr_max = new ChargeRate(0.9);
  Gobjcr_max->setLanguage(new German());
  Gobjcr_max->isOk();
  return 0;
}