#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[] = "Hello World";

    //���ڿ� ���� ���ϱ�
    printf("str1 ���ڿ� ���� : %d\n", strlen(str1));

    //���ڿ� ���� str1 ������ str2�� ����
    char str2[50];
    //strcpy(str2, str1);
    strcpy_s(str2,sizeof(str2),str1);
    printf("str2 : %s\n", str2);

    char str3[] = "Test World";
    //strcmp ����� 0�̾�� �� ���ڿ��� ������ ���ڿ��̴�.
    printf("str1�� str2 ���ڿ� �� : %d\n", strcmp(str1, str2));
    printf("str1�� str3 ���ڿ� �� : %d\n", strcmp(str1, str3));

    return 0;
}



