#include <stdio.h>

int main(void) {

	int n = 4351;
	int num;
	while (n > 0) {
		//�����ϳ� �Է� �޾Ƽ� 
		//�Է¹��� ���ڸ� n���ٰ� ������ �۾�
		//���������� ���� n�� �ٽ� ����
		//0���δ� �������� ��� 0�� �ԷµǸ� �ٷ� ���� �ݺ����� �Ѿ
		printf("���� �Է�(������) : ");
		scanf_s("%d", &num);
		if (num == 0)
			continue;
		n /= num;
		printf("%d�� ���� ��� : %d\n", num, n);

	}


	return 0;
}