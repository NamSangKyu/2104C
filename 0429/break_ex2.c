#include<stdio.h>
/*
	���ϸ� : break_ex2.c
	���� : ���� �ϳ��� �Է� ���� ��
		   �Է��� ������ �Ҽ����� �ƴ��� �Ǵ��ϴ� �ڵ� �ۼ�
*/
int main(void) {
	int num, i;

	printf("���� �Է� : ");
	scanf_s("%d", &num);

	for (i = 2; i < num / 2; i++) {
		if (num % i == 0)
			break;
	}
	if (i == num / 2 || num == 2)
		printf("�Է��Ͻ� ���ڴ� �Ҽ� �Դϴ�.\n");
	else
		printf("�Է��Ͻ� ���ڴ� �Ҽ� �ƴմϴ�.\n");

	return 0;
}