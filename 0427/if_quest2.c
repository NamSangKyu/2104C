#include <stdio.h>
/*
	파일명 : if_quest2.c
	숫자 하나를 입력 받은 후에
	입력 받은 숫자의 모든 약수들을 출력

	숫자 입력 : 10
	숫자 10의 약수 : 1 2 5 10
*/
int main(void) {
	int num, i;

	printf("숫자 입력 : ");
	scanf_s("%d", &num);

	printf("숫자 %d의 약수 : ",num);
	for (i = 1; i <= num; i++) {
		if (num % i == 0)
			printf("%d ", i);
	}

	return 0;
}