#include <stdio.h>
#define MIN
//define �� ADD�� ������ �ڵ带 �߰�
#ifndef ADD
int add(int n1, int n2) {
    return n1 + n2;
}
#endif
//define �� MIN ����Ǿ� ������ �ڵ带 �߰� ������ �߰����� ����
#ifdef MIN 
int min(int n1, int n2) {
    return n1 - n2;
}
#endif

int main(void) {
    int n1 = 10, n2 = 20;



    return 0;
}