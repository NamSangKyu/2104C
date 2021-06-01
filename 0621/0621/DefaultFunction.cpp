#include <iostream>
//매개 변수의 기본값을 설정
int sum(int a=50, int b=100) {
    return a + b;
}
//인자값은 매개변수에 들어갈때 맨 왼쪽부터 들어가기 때문에 
//기본값을 맨 오른쪽 매개변수부터 차례대로 지정
int minus(int a, int b=100) {
    return a - b;
}
int main(void) {
    std::cout << sum(10, 20) << std::endl;
    std::cout << sum(10) << std::endl;
    std::cout << sum() << std::endl;
    std::cout << minus(30) << std::endl;

    return 0;
}