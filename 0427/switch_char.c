#include <stdio.h>
/*
	���ϸ� : switch_char.c
	case���� �پ��ִ� ����
*/
int main(void) {
	char ch;
	printf("���� �ϳ� �Է�(a - ����,m - ����, e - ����) : ");
	scanf_s("%c", &ch);

	switch (ch) {
	case 'a':
	case 'A':
		printf("���� �Դϴ�\n");
		break;
	case 'm':
	case 'M':
		printf("���� �Դϴ�\n");
		break;
	case 'e':
	case 'E':
		printf("���� �Դϴ�\n");

	}

	return 0;
}