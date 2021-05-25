#include <stdio.h>
//선행처리자는 문법체크 하기전에 하는 일
#define AGE 20
#define PRINT printf("Hello World\n");
#define CAL(X) (X)*(X)
int main() {
    printf("나이 : %d\n", AGE);
    PRINT;
    printf("%d\n", CAL(2 + 5));
    return 0;
}