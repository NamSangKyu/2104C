#include <stdio.h>
//����ó���ڴ� ����üũ �ϱ����� �ϴ� ��
#define AGE 20
#define PRINT printf("Hello World\n");
#define CAL(X) (X)*(X)
int main() {
    printf("���� : %d\n", AGE);
    PRINT;
    printf("%d\n", CAL(2 + 5));
    return 0;
}