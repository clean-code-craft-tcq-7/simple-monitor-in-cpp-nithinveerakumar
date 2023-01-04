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
        return "Temperaturbruch";
    }
    string getTempHighBreachMessage(){
        return "Hohe Temperaturbruch";
    }
    string getTempLowWarningMessage(){
        return "Warnung vor niedriger Temperatur";
    }
    string getTempHighWarningMessage(){
        return "Warnung zu hoher Temperatur";
    }
    string getSOCLowBreachMessage(){
        return "SOC-Unterschreitung";
    }
    string getSOCHighBreachMessage(){
        return "SOC-Überschreitung";
    }
    string getSOCLowWarningMessage(){
        return "SOC-Niedrig-Warnung";
    }
    string getSOCHighWarningMessage(){
        return "SOC High-Warnung";
    }
    string getCRLowBreachMessage(){
        return "Durchbruch bei niedriger Laderate";
    }
    string getCRHighBreachMessage(){
        return "Hohe Verletzung der Laderate";
    }
    string getCRLowWarningMessage(){
        return "Warnung zu niedrigem Ladestrom";
    }
    string getCRHighWarningMessage(){
        return "Laderate Hoch Warnung";
    }

};