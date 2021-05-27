#include <iostream>
#define add(a,b) a+b
//정수 두개를 받아서 두수의 합을 리턴하는 함수
//inline은 컴파일러가 알아서 붙여줌. 매크로 함수랑 동일한 효과
inline int sum(int n1, int n2) {
    return n1 + n2;
}
int main(void) {
    std::cout << sum(10, 20) << std::endl;
    std::cout << add(10, 20) << std::endl;
    return 0;
}