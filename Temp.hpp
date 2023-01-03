#include "BMS.hpp"

namespace bms {
class Temperature : public BMS{
 Message* lang = new Message();
 int tempMinLimit = 0;
 int tempMaxLimit = 45;
 int temperature ;
 
 void setLanguage(Message* obj)
 {
  lang = obj;
 }
 bool isMin() {
  if(temperature<=tempMinLimit){
   cout<<lang->getTempLowBreachMessage()<<endl;
   return true;
 }
 return false;
}
 bool isMax(){
  if(temperature >= tempMaxLimit){
   cout<<lang->getTempHighBreachMessage()<<endl;
   return true;
  }
 return false;
 }
 bool isThresholdMin()
 {
   if(temperature <= tempMinLimit+(tempMaxLimit*0.05)){
   cout<<lang->getTempLowWarningMessage()<<endl;
   return true;
   }
   return false;
 }
 bool isThresholdMax()
 {
   if(temperature >= tempMaxLimit-(tempMaxLimit*0.05)){
   cout<<lang->getTempHighWarningMessage()<<endl;
   return true;
   }
   return false;
 }
 public:
 Temperature (int temp){
  temperature = temp;
 }
 bool isOk(){
  if (isMin() || isThresholdMin() || isMax() || isThresholdMax())
    return false;
  cout<<"Temperature is Normal"<<endl;
  return true;
 }
};
}