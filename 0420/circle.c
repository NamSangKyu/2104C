#include <stdio.h>

int main(void) {
	int r;
	double area;

	printf("������ �ϳ� �Է� : ");
	scanf_s("%d", &r);

	area = r * r * 3.1415; //�̋� r*r�� ����� double�� ����ȯ

	printf("������ %d�� ������ : %lf\n", r, area);


	return 0;
}