#include <iostream>
using namespace std;
class OnOff {
public:
    void powerOn() {}
    void powerOff() {}
};
class TV : public OnOff {
private:
    bool power;
public:
    void powerOn() {
        power = true;
        cout << "TV 전원 On" << endl;
    }
    void powerOff() {
        power = false;
        cout << "TV 전원 Off" << endl;
    }
};
class Boiler : public OnOff {
private:
    bool power;
public:
    void powerOn() {
        power = true;
        cout << "Boiler 전원 On" << endl;
    }
    void powerOff() {
        power = false;
        cout << "Boiler 전원 Off" << endl;
    }
};
int main(void) {
    Boiler boiler;
    TV tv;
    boiler.powerOn();
    boiler.powerOff();
    tv.powerOn();
    tv.powerOff();

    return 0;
}