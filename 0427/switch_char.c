#include <stdio.h>
/*
	파일명 : switch_char.c
	case들이 붙어있는 형태
*/
int main(void) {
	char ch;
	printf("문자 하나 입력(a - 오후,m - 오전, e - 저녁) : ");
	scanf_s("%c", &ch);

	switch (ch) {
	case 'a':
	case 'A':
		printf("오후 입니다\n");
		break;
	case 'm':
	case 'M':
		printf("오전 입니다\n");
		break;
	case 'e':
	case 'E':
		printf("저녁 입니다\n");

	}

	return 0;
}