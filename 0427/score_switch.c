#include <stdio.h>
/*
	���ϸ� : score_switch.c
*/
int main(void) {
	/*
		����(0~100)�ϳ� �Է��� �޾Ƽ�
		�Ʒ��� �ش��ϴ� ������ ������ �´� ���� ����� ���
		switch ���� �̿��ؼ� ���

		90~100 A���
		80~89  B���
		70~79  C���
		50~69  D���
		0 ~49  F���
	*/
	int score;

	printf("���� �Է� : ");
	scanf_s("%d", &score);

	switch (score / 10) {
	case 10:
	case 9:
		printf("A ���\n");
		break;
	case 8:
		printf("B ���\n");
		break;
	case 7:
		printf("C ���\n");
		break;
	case 6:
	case 5:
		printf("D ���\n");
		break;
	default:
		printf("F ���\n");
	}



	return 0;
}