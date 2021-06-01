#include <iostream>
namespace A {
    int num = 20;
    void printMessage() {
        std::cout << "namespace A" << std::endl;
    }
}
using A::printMessage;
using A::num;
//cout endl cin using 처리
//using std::cout;
//using std::cin;
//using std::endl;
using namespace std;//네임스페이스 std는 네임스페이스명을 안쓰고 바로 접근하겠다.

int main(void) {
    A::printMessage();
    printMessage();
    std::cout << num << std::endl;
    cout << num << endl;
    return 0;
}




