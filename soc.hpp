#include "Temp.hpp"

namespace bms{
class SOC : public BMS {
  Message Obj;
 SOC (){

 }
 Message* lang = new Message();
 int socMinLimit = 20;
 int socMaxLimit = 80;
 int soc ;
 
 void setLanguage(Message* obj)
 {
  lang = obj;
 }
 bool isMin() {
  if(soc<=socMinLimit){
   cout<<lang->getSOCLowBreachMessage()<<endl;
   return true;
 }
 return isThresholdMin();
}
 bool isMax(){
  if(soc >= socMaxLimit){
   cout<<lang->getSOCHighBreachMessage()<<endl;
   return true;
  }
 return  isThresholdMax();
 }
 bool isThresholdMin()
 {
   if(soc <= socMinLimit+(socMaxLimit*0.05)){
   cout<<lang->getSOCLowWarningMessage()<<endl;
   return true;
   }
   return false;
 }
 bool isThresholdMax()
 {
   if(soc >= socMaxLimit-(socMaxLimit*0.05)){
   cout<<lang->getSOCHighWarningMessage()<<endl;
   return true;
   }
   return false;
 }
 public:
 SOC (int soc){
  this->soc = soc;
 }
 bool isOk(){
  if (isMin() || isMax())
    return false;
  cout<<"SOC is Normal"<<endl;
  return true;
 }
};
}