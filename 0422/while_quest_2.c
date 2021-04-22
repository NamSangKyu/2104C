#include <stdio.h>
/*
	숫자 하나를 입력 받은 후 
	1부터 해당 숫자까지 더한 결과를 출력
	예>
	숫자 입력 : 100
	총합 : 5050

*/
int main(void) {
	int n, total, i;

	i = 1;
	total = 0;

	printf("숫자 입력 : ");
	scanf_s("%d", &n);

	while (i<=n)
	{
		total += i;
		i++;
	}
	printf("1~%d까지의 합 : %d\n", n, total);

	return 0;
}