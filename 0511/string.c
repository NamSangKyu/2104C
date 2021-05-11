#include <stdio.h>

int main(void) {
    char str1[] = "Hello World";
    char* str2 = "Hello World";//Hello World 상수 데이터를 가리킴

    printf("%s\n", str1);
    printf("%s\n", str2);

    str1[0] = 'A';
    //str2[0] = 'A';//데이터 변경이 X, 런타임 오류

    printf("%s\n", str1);
    printf("%s\n", str2);

    return 0;
}