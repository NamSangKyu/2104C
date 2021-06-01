#include <iostream>
// 함수 오버로딩 : 똑같은 함수명을 쓸수 있게 하는 문법
//                함수명이 같으면 매개변수를 차이점을 둬서 중복선언을 허용
//1. 매개변수 개수가 다르게 선언
//2. 매개변수가 개수가 같다면? ---> 변수타입을 다르게 설정
int sum(int a, int b) {
    return a + b;
}
//문자 덧셈
char sum(char a, char b) {
    return a + b;
}
//실수 덧셈
double sum(double a, double b) {
    return a + b;
}
int sum(int a) {
    return a + 10;
}
int sum(int a, int b, int c) {
    return a + 10;
}
int main(void) {
    //std::cout << sum(10,20) << std::endl;//매개변수가 중복이 되기떄문에 에러
    std::cout << sum('A',' ') << std::endl;
    std::cout << sum(3.1415,45.643) << std::endl;
    
    return 0;
}