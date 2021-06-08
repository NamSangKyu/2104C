#include <iostream>
using namespace std;
class A {
private:
    int ea;
    int data;
public:
    A() {
        ea = 10;
        data = 0;
    }
    int sell(int d) {
        data += d;
        ea -= d/10;
        return d / 10;
    }
    void print() {
        cout << "A - data : " << data << endl;
        cout << "A - ea : " << ea<< endl;
    }
};
class B {
private:
    int ea;
    int data;
public:
    B() {
        ea = 0;
        data = 200;
    }
    //객체들끼리 데이터를 교환할려면 한쪽 객체에서 매개변수로 상대방을 받아야됨
    void buy(A &a) {
        ea += a.sell(40);
        data -= 40;
    }
    void print() {
        cout << "B - data : " << data << endl;
        cout << "B - ea : " << ea << endl;
    }
};

int main(void) {
    A a;
    B b;
    b.buy(a);
    b.print();
    a.print();
    return 0;
}