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
        cout << "TV ���� On" << endl;
    }
    void powerOff() {
        power = false;
        cout << "TV ���� Off" << endl;
    }
};
class Boiler : public OnOff {
private:
    bool power;
public:
    void powerOn() {
        power = true;
        cout << "Boiler ���� On" << endl;
    }
    void powerOff() {
        power = false;
        cout << "Boiler ���� Off" << endl;
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