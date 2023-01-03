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
  ObjTemperature_normal->isOk();
  BMS* ObjTemperature_maxWarn = new Temperature(44);
  ObjTemperature_maxWarn->isOk();
  BMS* ObjTemperature_max = new Temperature(50);
  ObjTemperature_max->isOk();
  ObjTemperature_max->setLanguage(new German());
  ObjTemperature_max->isOk();
  /*-----------------SOC validation ------------------*/
  BMS* Objsoc_low = new SOC(0);
  Objsoc_low->isOk();
  BMS* Objsoc_minWarn = new SOC(23);
  Objsoc_minWarn->isOk();
  BMS* Objsoc_normal = new SOC(30);
  Objsoc_normal->isOk();
  BMS* Objsoc_maxWarn = new SOC(77);
  Objsoc_maxWarn->isOk();
  BMS* Objsoc_max = new SOC(81);
  Objsoc_max->isOk();
  Objsoc_max->setLanguage(new German());
  Objsoc_max->isOk();
   /*-----------------Charge Rate validation ------------------*/
  BMS* Objcr_low = new ChargeRate(0);
  Objcr_low->isOk();
  BMS* Objcr_minWarn = new ChargeRate(0.1);
  Objcr_minWarn->isOk();
  BMS* Objcr_normal = new ChargeRate(0.5);
  Objcr_normal->isOk();
  BMS* Objcr_maxWarn = new ChargeRate(0.77);
  Objcr_maxWarn->isOk();
  BMS* Objcr_max = new ChargeRate(0.9);
  Objcr_max->isOk();
  Objcr_max->setLanguage(new German());
  Objcr_max->isOk();
  return 0;
}