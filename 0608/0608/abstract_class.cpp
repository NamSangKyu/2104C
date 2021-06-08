#include <iostream>
using namespace std;
//���������Լ��� �����ϸ� �ش�Ŭ������ �߻�Ŭ����
//�߻�Ŭ������ �Ǹ� ���������� ������ �Ҽ� ����
class OnOff {
public:
    //���������Լ� : �����θ� ����, OnOff�� ��ӹ޴� Ŭ������ 
    //              �ݵ�� ���������Լ��� �������̵��ؾ� ������ ��������
    virtual void powerOn() = 0;
    virtual void powerOff() = 0;
};
//�߻�Ŭ���� ��ӽ� ���������Լ��� �������� ������ �߻�Ŭ������ ��
class Light : public OnOff{

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
void powerOn(OnOff &onoff) {
    //�����Լ� ������ �߱⶧���� ���� ��ü�� �������̵��ϰų�
    //������ �Լ��� ����Ҽ� �ִ�.
    onoff.powerOn();
}
void powerOff(OnOff &onoff) {
    onoff.powerOff();
}
int main(void) {
    Boiler boiler;
    TV tv;
    OnOff *onoff;
    onoff = &boiler;//�ڽ�Ŭ������ �θ�Ŭ������ ����ȯ�� ����
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