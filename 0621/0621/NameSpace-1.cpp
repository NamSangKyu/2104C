#include <iostream>
//namespace 키워드를 이용해서 --> 코드상에서 영역 나누기
namespace A {
    int num=20;
    void printMessage() {
        std::cout << "namespace A" << std::endl;
    }
}
namespace B 
{
    int num = 20;
    void printMessage() {
        std::cout << "namespace B" << std::endl;
    }
}
int main(void) {
    A::num++;
    std::cout << A::num << std::endl;
    std::cout << B::num << std::endl;
    A::printMessage();
    B::printMessage();
    return 0;
}




