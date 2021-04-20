#include <stdio.h>

int main(void) {
	int r;
	double area;

	printf("반지름 하나 입력 : ");
	scanf_s("%d", &r);

	area = r * r * 3.1415; //이떄 r*r의 결과는 double로 형변환

	printf("반지름 %d의 원넓이 : %lf\n", r, area);


	return 0;
}