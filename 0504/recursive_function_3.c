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

	printf("숫자 입력 : ");
	scanf_s("%d", &num);
	n = num;
	//이진수 변환해서 출력
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