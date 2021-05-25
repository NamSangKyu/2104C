#include <stdio.h>
#define MIN
//define 중 ADD가 없으면 코드를 추가
#ifndef ADD
int add(int n1, int n2) {
    return n1 + n2;
}
#endif
//define 중 MIN 선언되어 있으면 코드를 추가 없으면 추가하지 않음
#ifdef MIN 
int min(int n1, int n2) {
    return n1 - n2;
}
#endif

int main(void) {
    int n1 = 10, n2 = 20;



    return 0;
}