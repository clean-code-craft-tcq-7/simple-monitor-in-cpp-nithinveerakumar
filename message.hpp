#include <iostream>
#include <string>
using namespace std;
class Message
{
    public:
    virtual string getTempLowBreachMessage(){
        return "Temperature low breach";
    }
    virtual string getTempHighBreachMessage(){
        return "Temperature high breach";
    }
    virtual string getTempLowWarningMessage(){
        return "Temperature low warning";
    }
    virtual string getTempHighWarningMessage(){
        return "Temperature High warning";
    }
    virtual string getSOCLowBreachMessage(){
        return "SOC low breach";
    }
    virtual string getSOCHighBreachMessage(){
        return "SOC high breach";
    }
    virtual string getSOCLowWarningMessage(){
        return "SOC low warning";
    }
    virtual string getSOCHighWarningMessage(){
        return "SOC High warning";
    }
    virtual string getCRLowBreachMessage(){
        return "Charge rate low breach";
    }
    virtual string getCRHighBreachMessage(){
        return "Charge rate high breach";
    }
    virtual string getCRLowWarningMessage(){
        return "Charge rate low warning";
    }
    virtual string getCRHighWarningMessage(){
        return "Charge rate High warning";
    }

};
class German : public Message
{
    string getTempLowBreachMessage(){
        return "GTemperature low breach";
    }
    string getTempHighBreachMessage(){
        return "GTemperature high breach";
    }
    string getTempLowWarningMessage(){
        return "GTemperature low warning";
    }
    string getTempHighWarningMessage(){
        return "GTemperature High warning";
    }
    string getSOCLowBreachMessage(){
        return "G SOC low breach";
    }
    string getSOCHighBreachMessage(){
        return "G SOC high breach";
    }
    string getSOCLowWarningMessage(){
        return "G SOC low warning";
    }
    string getSOCHighWarningMessage(){
        return "G SOC High warning";
    }
    string getCRLowBreachMessage(){
        return "GCharge rate low breach";
    }
    string getCRHighBreachMessage(){
        return "GCharge rate high breach";
    }
    string getCRLowWarningMessage(){
        return "GCharge rate low warning";
    }
    string getCRHighWarningMessage(){
        return "GCharge rate High warning";
    }

};