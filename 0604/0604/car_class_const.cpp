#include <iostream>
#include <cstring>
using namespace std;
//car 모델명, 현재속도, 최대속도
class Car {
private:
    char * model;
    int speed;
    /*const int MAX_SPEED=240;*/
    const int MAX_SPEED;
public:

    //initailizer : 상수나 참조자를 초기화 해줌, 객체 생성전에 초기화 처리
    Car(const char * m, int s, int mx) : speed(s), MAX_SPEED(mx){
        model = new char[strlen(m)+1];
        strcpy_s(model, strlen(m)+1, m);
    }
    //Acc : 액셀레이터 기능, 실행할떄마다 속도 10씩 증가
    void Acc() {
        speed += 10;
        if (speed > MAX_SPEED)
            speed = MAX_SPEED;
        PrintInfo();         
    }
    //Break : 브레이크 기능, 실행 할때마다 속도 7씩 감소
    void Break() {
        speed -= 7;
        if (speed < 0) speed = 0;
        PrintInfo();
    }
    //PrintInfo : 차량정보 출력
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