#include <stdio.h>

int main(void) {
	int i = 1;
	int total = 0;

	//���ѷ���
	while (1) {
		total += i;

		if (total > 100)
			break; //���� ���ΰ� �ִ� �ݺ��� �����ϴ� Ű����
		i++;
	}

	printf("�������� ���� �� : %d\n", i);
	printf("���� : %d\n", total);

	return 0;
}