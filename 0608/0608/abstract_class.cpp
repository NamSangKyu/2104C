#include <iostream>
using namespace std;
//순수가상함수를 선언하면 해당클래스는 추상클래스
//추상클래스가 되면 직접적으로 생성을 할수 없음
class OnOff {
public:
    //순수가상함수 : 구현부를 제거, OnOff를 상속받는 클래스는 
    //              반드시 순수가상함수를 오버라이딩해야 생성이 가능해짐
    virtual void powerOn() = 0;
    virtual void powerOff() = 0;
};
//추상클래스 상속시 순수가상함수를 구현하지 않으면 추상클래스가 됨
class Light : public OnOff{

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
void powerOn(OnOff &onoff) {
    //가상함수 적용을 했기때문에 원본 객체가 오버라이딩하거나
    //구현한 함수를 사용할수 있다.
    onoff.powerOn();
}
void powerOff(OnOff &onoff) {
    onoff.powerOff();
}
int main(void) {
    Boiler boiler;
    TV tv;
    OnOff *onoff;
    onoff = &boiler;//자식클래스는 부모클래스로 형변환이 가능
    /*onoff->powerOn();
    onoff->powerOff();*/
    onoff = &tv;
    /*onoff->powerOn();
    onoff->powerOff();*/
    powerOn(boiler);
    powerOff(tv);
    //Light l;
    return 0;
}