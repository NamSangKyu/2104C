#include <stdio.h>
/*
	�Լ�(function) : �ϳ��� ��� ������ �����ؼ� 
				    ����ڰ� �ʿ��Ҷ����� �ҷ��� ���� ����
				ex> printf, scanf_s/scanf

*/

int sum(int n1, int n2) {
	return n1 + n2;
}

int main(void) {
	int n1, n2;
	int result;

	printf("���� �ΰ� �Է� : ");
	scanf_s("%d %d", &n1, &n2);
	result = sum(n1, n2);
	printf("�μ����� �� : %d\n", result);

	return 0;
}