#include <stdio.h>
int main(void) {
	//숫자하나 입력받는 코드 작성
	int n;
	printf("숫자 입력 : ");
	scanf_s("%d", &n);

	if (n % 2 == 0) {
		printf("입력하신 숫자는 짝수 입니다.\n");
	}
	else{
		printf("입력하신 숫자는 홀수 입니다.\n");
	}
	return 0;
}