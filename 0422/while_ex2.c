#include<stdio.h>

int main(void) {
	//���� �ϳ� �Է�
	int dan, i;

	printf("���� �ϳ� �Է� : ");
	scanf_s("%d", &dan);

	//�Է��� ������ �������� ���
	//�ʱ�ȭ, ���ǽ�, ������
	i = 0;
	while (i < 9) {
		i++;
		printf("%d * %d = %d\n", dan, i, dan * i);
	}
	return 0;
}