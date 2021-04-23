#include <stdio.h>

int main(void) {
	int n, total;
	total = 0;
	n = 0;

	 do{
		printf("숫자 입력 : ");
		scanf_s("%d", &n);
		total += n; //total = total + n;
	}while (n != 0);
	printf("입력하신 숫자들의 총합 : %d\n", total);

	return 0;
}