#include <stdio.h>

int main(void) {
    char str1[] = "Hello World";
    char* str2 = "Hello World";//Hello World ��� �����͸� ����Ŵ

    printf("%s\n", str1);
    printf("%s\n", str2);

    str1[0] = 'A';
    //str2[0] = 'A';//������ ������ X, ��Ÿ�� ����

    printf("%s\n", str1);
    printf("%s\n", str2);

    return 0;
}