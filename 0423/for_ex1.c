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

	for ( ;n > 0; n--)
	{
		printf("Hello World\n");
		
	}

	return 0;
}