#include <iostream>
using namespace std;

class Number {
private:
    static int count;
public:
    Number() {
        count++;
        cout << count << "��° ����" << endl;
    }

};
//static���� ����� ��� ������ �ݵ�� �ܺο��� �ʱ�ȭ ������ߵ�
int Number::count = 0;
int main(void) {
    Number n1,n2,n3;
    return 0;
}