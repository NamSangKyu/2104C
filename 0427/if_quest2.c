#include <stdio.h>
/*
	���ϸ� : if_quest2.c
	���� �ϳ��� �Է� ���� �Ŀ�
	�Է� ���� ������ ��� ������� ���

	���� �Է� : 10
	���� 10�� ��� : 1 2 5 10
*/
int main(void) {
	int num, i;

	printf("���� �Է� : ");
	scanf_s("%d", &num);

	printf("���� %d�� ��� : ",num);
	for (i = 1; i <= num; i++) {
		if (num % i == 0)
			printf("%d ", i);
	}

	return 0;
}