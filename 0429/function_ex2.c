#include <stdio.h>

//�Ű����� O, ���� O
//�����ϳ��� �޾Ƽ� �ش� ���ڰ� Ȧ���� 1, ¦���� 0
int checkOddEven(int num) {
	int result;

	if (num % 2 == 0)
		result = 0;
	else
		result = 1;

	return result;//�������� �ǵ��� �ټ� �ִ� ���� �Ѱ�
}
//�Ű����� X, ���� O
//���� �ϳ� �Է� �޾Ƽ� �����ϴ� �Լ�
int inputNumber() {
	int num;
	printf("���� �Է� : ");
	scanf_s("%d", &num);
	return num;
}

//�Ű����� X, ���� X
void printMessage() {
	printf("���ݺ��� Ȧ¦�� �Ǵ��ϴ� ���α׷��� �����մϴ�.\n");
}

//�Ű����� O, ���� X
void printResult(int n, int r) {
	printf("���� %d�� ", n);
	if (r)
		printf("Ȧ�� �Դϴ�.\n");
	else
		printf("¦�� �Դϴ�.\n");
}
int main(void) {
	int n;
	printMessage();
	n = inputNumber();
	printResult(n, checkOddEven(n));

	return 0;
}