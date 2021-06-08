#include <iostream>
using namespace std;
class OnOff {
public:
    void powerOn() {
        cout << "�⺻ �Ŀ� On" << endl;
    }
    void powerOff() {
        cout << "�⺻ �Ŀ� Off" << endl;
    }
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
    OnOff *onoff;
    onoff = &boiler;
    onoff->powerOn();
    onoff->powerOff();


    return 0;
}