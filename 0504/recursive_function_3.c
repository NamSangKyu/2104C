#include <stdio.h>
void DecToBin(int n) {
	if (n > 1) {
		DecToBin(n / 2);
		printf("%d", n % 2);
	}
	else
		printf("%d", n);
}
int main(void) {
	int num, max = 1 , n;

	printf("���� �Է� : ");
	scanf_s("%d", &num);
	n = num;
	//������ ��ȯ�ؼ� ���
	while (max < num) {
		max *= 2;
	}
	max /= 2;
	printf("max : %d\n", max);

	while (max > 0) {
		printf("%d", num / max);
		num %= max;
		max /= 2;
	}
	printf("\n---------------\n");
	DecToBin(n);
	return 0;
}