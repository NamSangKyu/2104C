#include <stdio.h>

int main(void) {

	char ch;

	printf("���� �ϳ� �Է� �ϼ��� : ");
	scanf_s("%c", &ch);

	ch += 32;

	printf("�Է¹��� �빮�ڸ� �ҹ��ڷ� ���� : %c\n",ch);

	return 0;
}