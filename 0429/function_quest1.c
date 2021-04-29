#include<stdio.h>
/*
	파일명 : function_quest1.c
	문제 : 소수를 판단하는 함수를 작성
*/
int checkPrimeNumber(int num) {
	int i;
	if (num < 2) return 0;//2보다 작은 소수는 없음
	for (i = 2; i <= num / 2; i++) {
		if (num % i == 0)//소수가 아닌경우
			return 0;
	}
	return 1;//소수인 경우
}
int main(void) {
	int num;

	printf("숫자 입력 : ");	scanf_s("%d", &num);

	if (checkPrimeNumber(num))
		printf("입력하신 숫자는 소수 입니다.\n");
	else
		printf("입력하신 숫자는 소수 아닙니다.\n");

	return 0;
}