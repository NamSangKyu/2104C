#include <stdio.h>
/*
	함수(function) : 하나의 기능 별도로 구현해서 
				    사용자가 필요할때마다 불러다 쓰는 형태
				ex> printf, scanf_s/scanf

*/

int sum(int n1, int n2) {
	return n1 + n2;
}

int main(void) {
	int n1, n2;
	int result;

	printf("숫자 두개 입력 : ");
	scanf_s("%d %d", &n1, &n2);
	result = sum(n1, n2);
	printf("두숫자의 합 : %d\n", result);

	return 0;
}