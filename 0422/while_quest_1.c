#include <stdio.h>
/*
	���� �ϳ��� �Է� �޾Ƽ�
	�Է¹��� ���ڸ�ŭ
	Hello World�� ����ϼ���

*/
int main(void) {
	int n;

	printf("����� ���� �Է� : ");
	scanf_s("%d", &n);

	while (n>0)
	{
		printf("Hello World\n");
		n--;
	}

	return 0;
}