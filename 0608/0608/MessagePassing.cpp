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
    //��ü�鳢�� �����͸� ��ȯ�ҷ��� ���� ��ü���� �Ű������� ������ �޾ƾߵ�
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