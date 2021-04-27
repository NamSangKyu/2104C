#include <stdio.h>
/*
	파일명 : if_quest3.c

	숫자 두개를 입력 받은 후
	두 수의 뺀 결과를 구함
	이 결과가 무조건 양수가 나오게끔 처리

	숫자 입력 : 3 5
	계산 결과 : 2

	숫자 입력 : 5 3
	계산 결과 : 2

*/
int main(void) {
	int n1, n2;
	int result;
	printf("숫자 두개 입력 : ");
	scanf_s("%d %d", &n1, &n2);

	result = n1 - n2;
	if (result < 0)
		result = -result;
	printf("계산 결과 : %d\n", result);

	/*if (n1 > n2)
		printf("계산 결과 : %d\n", n1 - n2);
	else
		printf("계산 결과 : %d\n", n2 - n1);*/


	return 0;
}