#include <stdio.h>

int main(void) {
	int n, total;
	total = 0;
	n = 0;

	 do{
		printf("���� �Է� : ");
		scanf_s("%d", &n);
		total += n; //total = total + n;
	}while (n != 0);
	printf("�Է��Ͻ� ���ڵ��� ���� : %d\n", total);

	return 0;
}