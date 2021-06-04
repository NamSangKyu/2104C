#include <iostream>
#include <cstring>
using namespace std;
//car �𵨸�, ����ӵ�, �ִ�ӵ�
class Car {
private:
    char * model;
    int speed;
    /*const int MAX_SPEED=240;*/
    const int MAX_SPEED;
public:

    //initailizer : ����� �����ڸ� �ʱ�ȭ ����, ��ü �������� �ʱ�ȭ ó��
    Car(const char * m, int s, int mx) : speed(s), MAX_SPEED(mx){
        model = new char[strlen(m)+1];
        strcpy_s(model, strlen(m)+1, m);
    }
    //Acc : �׼������� ���, �����ҋ����� �ӵ� 10�� ����
    void Acc() {
        speed += 10;
        if (speed > MAX_SPEED)
            speed = MAX_SPEED;
        PrintInfo();         
    }
    //Break : �극��ũ ���, ���� �Ҷ����� �ӵ� 7�� ����
    void Break() {
        speed -= 7;
        if (speed < 0) speed = 0;
        PrintInfo();
    }
    //PrintInfo : �������� ���
    void PrintInfo() {
        cout << model << " " << speed << " / " << MAX_SPEED << endl;
    }
};


int main(void) {
    Car k3("k3",30,200);
    k3.PrintInfo();
    Car k5("k5", 40, 240);
    k5.PrintInfo();
    return 0;
}