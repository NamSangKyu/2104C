#include <stdio.h>
/*
	������ r�� �޾Ƽ� �����̸� �������ִ� �Լ�
	���ο��� ������ ���ϴ� �Լ��� ����
*/
double circleArea(double r) {
	return r * r * 3.1415;
}
int main(void) {
	double r;

	printf("������ �Է� : ");
	scanf_s("%lf", &r);

	printf("������ %g�� ������ : %g\n", r, circleArea(r));

	return 0;
}