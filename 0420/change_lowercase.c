#include <stdio.h>

int main(void) {

	char ch;

	printf("문자 하나 입력 하세요 : ");
	scanf_s("%c", &ch);

	ch += 32;

	printf("입력받은 대문자를 소문자로 변경 : %c\n",ch);

	return 0;
}