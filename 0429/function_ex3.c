#include <stdio.h>
//함수의 원형 : 이 함수 구현을 해놨다 선언
int absMinus(int n1, int n2);
int absNumber(int n);

int main(void) {
	printf("두 숫자의 차 : %d\n", absMinus(5, 10));

	return 0;
}

int absMinus(int n1, int n2) {
	return absNumber(n1 - n2);
}

int absNumber(int n) {
	if (n < 0)
		n = -n;
	return n;
}