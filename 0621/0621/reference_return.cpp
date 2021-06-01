#include <iostream>
using namespace std;
int& add(int &n) {
    n++;
    return n;
}
int main(void) {
    int num = 10;
    int &ref = add(num);//매개변수가 참조자고, 리턴 참조자, 받는 변수로 참조자일 경우
    int var = add(num);//매개변수가 참조자고, 리턴 참조자, 받는 변수는 일반 변수일 경우
    cout << num << " " << &num << endl;
    cout << ref << " " << &ref << endl;
    cout << var << " " << &var << endl;

    return 0;
}