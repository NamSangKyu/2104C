#include <iostream>
using namespace std;
/*
    ������ : ������ �����ϸ� �޸� ������ �������� �ϳ� �پ�����, 
            �� ������ �ٸ� �������� �� �ٿ��� ����� ����(��������)
*/
int main(void) {
    int num = 10;
    //������ ���� ����, ����� ���ÿ� �ʱ�ȭ(�ݵ�� ������ �ʱ�ȭ)
    int &ref = num;
    int &var = ref;

    cout << num << " " << ref << " " << var << endl;
    num++;
    cout << num << " " << ref << " " << var << endl;
    cout << &num << " " << &ref << " " << &var << endl;

    return 0;
}