#include <stdio.h>
//�Լ��� ���� : �� �Լ� ������ �س��� ����
int absMinus(int n1, int n2);
int absNumber(int n);

int main(void) {
	printf("�� ������ �� : %d\n", absMinus(5, 10));

	return 0;
}

int absMinus(int n1, int n2) {
	return absNumber(n1 - n2);
}

int absNumber(int n) {
	if (n < 0)
		n = -n;
	return n;
}