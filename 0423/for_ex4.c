#include <stdio.h>
// 5! = 120 ---> 1*2*3*4*5  -->팩토리얼
/*
	숫자하나를 입력 받아서 해당하는 숫자의 팩토리얼 값을 출력
*/
int main(void) {
	int n, fac;

	printf("숫자하나 입력 : ");
	scanf_s("%d", &n);

	for (fac = 1 ; n > 1; n--) {
		fac *= n;
	}
	printf("입력하신 숫자의 팩토리얼 값은 %d\n", fac);
	return 0;
}