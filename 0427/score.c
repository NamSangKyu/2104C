#include <stdio.h>
/*
	���ϸ� : score.c
*/
int main(void) {
	/*
		����(0~100)�ϳ� �Է��� �޾Ƽ�
		�Ʒ��� �ش��ϴ� ������ ������ �´� ���� ����� ���

		90~100 A���
		80~89  B���
		70~79  C���
		50~69  D���
		0 ~49  F���
	*/
	int score;

	printf("���� �Է� : ");
	scanf_s("%d", &score);

	if (score >= 90 && score <= 100) 
		printf("A ���\n");
	else if (score >= 80) 
		printf("B ���\n");
	else if (score >= 70) 
		printf("C ���\n");
	else if (score >= 50) 
		printf("D ���\n");
	else 
		printf("F ���\n");
	


	return 0;
}