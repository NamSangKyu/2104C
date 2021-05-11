#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[] = "Hello World";

    //문자열 길이 구하기
    printf("str1 문자열 길이 : %d\n", strlen(str1));

    //문자열 복사 str1 내용을 str2로 복사
    char str2[50];
    //strcpy(str2, str1);
    strcpy_s(str2,sizeof(str2),str1);
    printf("str2 : %s\n", str2);

    char str3[] = "Test World";
    //strcmp 결과가 0이어야 두 문자열이 동일한 문자열이다.
    printf("str1과 str2 문자열 비교 : %d\n", strcmp(str1, str2));
    printf("str1과 str3 문자열 비교 : %d\n", strcmp(str1, str3));

    return 0;
}



