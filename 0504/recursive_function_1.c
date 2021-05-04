#include <stdio.h>
/*
	파일명 : recursive_function_1.c
	재귀함수
		함수 호출 시에 자기 자신을 또 호출하는 함수	
*/
void PrintNumber(int n) {
	printf("%d 번째 함수 호출\n", n);
	if(n <= 10)
		PrintNumber(n+1);
	printf("%d 번째 함수 종료\n", n);
}

int main(void) {
	PrintNumber(1);

	return 0;
}