#include<stdio.h>
/*
	���ϸ� : function_quest1.c
	���� : �Ҽ��� �Ǵ��ϴ� �Լ��� �ۼ�
*/
int checkPrimeNumber(int num) {
	int i;
	if (num < 2) return 0;//2���� ���� �Ҽ��� ����
	for (i = 2; i <= num / 2; i++) {
		if (num % i == 0)//�Ҽ��� �ƴѰ��
			return 0;
	}
	return 1;//�Ҽ��� ���
}
int main(void) {
	int num;

	printf("���� �Է� : ");	scanf_s("%d", &num);

	if (checkPrimeNumber(num))
		printf("�Է��Ͻ� ���ڴ� �Ҽ� �Դϴ�.\n");
	else
		printf("�Է��Ͻ� ���ڴ� �Ҽ� �ƴմϴ�.\n");

	return 0;
}