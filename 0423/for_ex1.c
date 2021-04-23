#include <stdio.h>
/*
	숫자 하나를 입력 받아서
	입력받은 숫자만큼
	Hello World를 출력하세요

*/
int main(void) {
	int n;

	printf("출력할 개수 입력 : ");
	scanf_s("%d", &n);

	for ( ;n > 0; n--)
	{
		printf("Hello World\n");
		
	}

	return 0;
}