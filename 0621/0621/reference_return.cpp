#include <iostream>
using namespace std;
int& add(int &n) {
    n++;
    return n;
}
int main(void) {
    int num = 10;
    int &ref = add(num);//�Ű������� �����ڰ�, ���� ������, �޴� ������ �������� ���
    int var = add(num);//�Ű������� �����ڰ�, ���� ������, �޴� ������ �Ϲ� ������ ���
    cout << num << " " << &num << endl;
    cout << ref << " " << &ref << endl;
    cout << var << " " << &var << endl;

    return 0;
}