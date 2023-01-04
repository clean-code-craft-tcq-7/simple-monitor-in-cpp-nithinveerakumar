#include "soc.hpp"

namespace bms{
class ChargeRate : public BMS {
  Message Obj;
 ChargeRate (){

 }
 Message* lang = new Message();
 float crMinLimit = 0;
 float crMaxLimit = 0.8;
 float cr ;
 
 void setLanguage(Message* obj)
 {
  lang = obj;
 }
 bool isMin() {
  if(cr<=crMinLimit){
   cout<<lang->getCRLowBreachMessage()<<endl;
   return true;
 }
 return isThresholdMin();
}
 bool isMax(){
  if(cr >= crMaxLimit){
   cout<<lang->getCRHighBreachMessage()<<endl;
   return true;
  }
 return isThresholdMax();
 }
 bool isThresholdMin()
 {
   if(cr <= crMinLimit+(crMaxLimit*0.05)){
   cout<<lang->getCRLowWarningMessage()<<endl;
   return true;
   }
   return false;
 }
 bool isThresholdMax()
 {
   if(cr >= crMaxLimit-(crMaxLimit*0.05)){
   cout<<lang->getCRHighWarningMessage()<<endl;
   return true;
   }
   return false;
 }
 public:
 ChargeRate (float cr){
  this->cr = cr;
 }
 bool isOk(){
  if (isMin() || isMax())
    return false;
  cout<<"ChargeRate is Normal"<<endl;
  return true;
 }
};
}