#include <iostream>
namespace A {
    int num = 20;
    void printMessage() {
        std::cout << "namespace A" << std::endl;
    }
}
using A::printMessage;
using A::num;
//cout endl cin using ó��
//using std::cout;
//using std::cin;
//using std::endl;
using namespace std;//���ӽ����̽� std�� ���ӽ����̽����� �Ⱦ��� �ٷ� �����ϰڴ�.

int main(void) {
    A::printMessage();
    printMessage();
    std::cout << num << std::endl;
    cout << num << endl;
    return 0;
}




