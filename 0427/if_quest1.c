#include <stdio.h>
/*
	���ϸ� : if_quest1.c

	���� 1���� 100������ ���� ��
	3�� 5�� ����� ����Ͻÿ�
	�� 3�� 5�� ������� �ѹ��� ��� 
*/
int main(void) {
	int i;

	for (i = 1; i < 101; i++) {
		if(i % 3 == 0 || i % 5 == 0)
			printf("%d ", i);
	}
	return 0;
}