#include<stdio.h>

int main(void) {
	//숫자 하나 입력
	int dan, i;

	printf("숫자 하나 입력 : ");
	scanf_s("%d", &dan);

	//입력한 숫자의 구구단을 출력
	//초기화, 조건식, 증감식
	i = 0;
	while (i < 9) {
		i++;
		printf("%d * %d = %d\n", dan, i, dan * i);
	}
	return 0;
}