#include <stdio.h>

int main(void) {
	//���� �ΰ� �Է�
	//������ �Է� �޾Ƽ� �ش��ϴ� ������ ����
	int n1, n2, result;
	char op;

	printf("���� �ΰ� �Է� : ");
	scanf_s("%d %d", &n1, &n2);

	printf("������ �Է� : ");
	scanf_s(" %c", &op);

	switch(op) {
	case '+':
		result = n1 + n2;
		break;
	case '-':
		result = n1 - n2;
		break;
	case '*':
		result = n1 * n2;
		break;
	case '/':
		result = n1 / n2;
		break;
	default:
		result = n1 % n2;
	}

	printf("%d %c %d = %d\n", n1, op, n2, result);
	return 0;
}