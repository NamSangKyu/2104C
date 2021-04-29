#include <stdio.h>
/*
	반지름 r값 받아서 원넓이를 리턴해주는 함수
	메인에서 원넓이 구하는 함수를 실행
*/
double circleArea(double r) {
	return r * r * 3.1415;
}
int main(void) {
	double r;

	printf("반지름 입력 : ");
	scanf_s("%lf", &r);

	printf("반지름 %g의 원넓이 : %g\n", r, circleArea(r));

	return 0;
}