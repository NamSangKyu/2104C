#include <stdio.h>
/*
	���� �ϳ��� �Է� ���� �� 
	1���� �ش� ���ڱ��� ���� ����� ���
	��>
	���� �Է� : 100
	���� : 5050

*/
int main(void) {
	int n, total, i;

	i = 1;
	total = 0;

	printf("���� �Է� : ");
	scanf_s("%d", &n);

	while (i<=n)
	{
		total += i;
		i++;
	}
	printf("1~%d������ �� : %d\n", n, total);

	return 0;
}