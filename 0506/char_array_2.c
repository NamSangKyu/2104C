#define _CRT_SECURE_NO_WARNINGS //sdl �˻� ����
#include <stdio.h>
int main(void) {
	char str[10];

	printf("���ڿ� �Է� : ");
	//������ �迭�� ����� �ݵ�� �־���ߵ�
	//�迭�� ������� �ʰ��Ǹ� �����͸� ���� ����
	//scanf_s("%s", str, sizeof(str));
	scanf("%s", str);

	printf("%s\n", str);

	return 0;
}