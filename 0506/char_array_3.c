#include <stdio.h>

int main(void) {

	char str[50];

	int i=0;

	printf("���ڿ� �Է� : ");
	scanf_s("%s", str, sizeof(str));
	//�ι��� --> '\0',  �ι��� �ƽ�Ű �ڵ尪 --> 0
	//�Է��� ���ڱ����� ����� �ǰԲ� �ݺ����� ����
	while (str[i] != 0) {
		putchar(str[i++]);//���� �ϳ��� ���
		printf("\n");
	}
	return 0;
}