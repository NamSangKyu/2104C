#include <stdio.h>
/*
	���ϸ� : if_quest3.c

	���� �ΰ��� �Է� ���� ��
	�� ���� �� ����� ����
	�� ����� ������ ����� �����Բ� ó��

	���� �Է� : 3 5
	��� ��� : 2

	���� �Է� : 5 3
	��� ��� : 2

*/
int main(void) {
	int n1, n2;
	int result;
	printf("���� �ΰ� �Է� : ");
	scanf_s("%d %d", &n1, &n2);

	result = n1 - n2;
	if (result < 0)
		result = -result;
	printf("��� ��� : %d\n", result);

	/*if (n1 > n2)
		printf("��� ��� : %d\n", n1 - n2);
	else
		printf("��� ��� : %d\n", n2 - n1);*/


	return 0;
}