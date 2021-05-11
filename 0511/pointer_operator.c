#include <stdio.h>

int main(void) {
    int* p1 = 10;
    double* p2 = 10;
    //p1과 p2 메모리 10번지 가리킴

    //포인터를 덧셈 및 뺄셈을 하면
    //해당 포인터가 가리키는 변수 타입 만큼 곱해서 증가/감소
    printf("%d %d\n", p1 + 1, p1 + 2);
    printf("%d %d\n", p2 + 1, p2 + 2);
    return 0;
}