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
    void PowerOn() {
        power = true;
        cout << "TV ���� On" << endl;
    }
    void PowerOff() {
        power = false;
        cout << "TV ���� Off" << endl;
    }
};
class Boiler : public OnOff {
private:
    bool power;
public:
    void PowerOn() {
        power = true;
        cout << "Boiler ���� On" << endl;
    }
    void PowerOff() {
        power = false;
        cout << "Boiler ���� Off" << endl;
    }
};
int main(void) {

    return 0;
}