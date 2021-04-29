#include<stdio.h>
/*
	파일명 : break_ex2.c
	문제 : 숫자 하나를 입력 받은 후
		   입력한 숫자의 소수인지 아닌지 판단하는 코드 작성
*/
int main(void) {
	int num, i;

	printf("숫자 입력 : ");
	scanf_s("%d", &num);

	for (i = 2; i < num / 2; i++) {
		if (num % i == 0)
			break;
	}
	if (i == num / 2 || num == 2)
		printf("입력하신 숫자는 소수 입니다.\n");
	else
		printf("입력하신 숫자는 소수 아닙니다.\n");

	return 0;
}