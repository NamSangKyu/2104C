#include <stdio.h>
int main(void) {
	//�����ϳ� �Է¹޴� �ڵ� �ۼ�
	int n;
	printf("���� �Է� : ");
	scanf_s("%d", &n);

	if (n % 2 == 0) {
		printf("�Է��Ͻ� ���ڴ� ¦�� �Դϴ�.\n");
	}
	else{
		printf("�Է��Ͻ� ���ڴ� Ȧ�� �Դϴ�.\n");
	}
	return 0;
}