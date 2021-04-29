#include <stdio.h>

//매개변수 O, 리턴 O
//숫자하나를 받아서 해당 숫자가 홀수면 1, 짝수면 0
int checkOddEven(int num) {
	int result;

	if (num % 2 == 0)
		result = 0;
	else
		result = 1;

	return result;//리턴으로 되돌려 줄수 있는 값은 한개
}
//매개변수 X, 리턴 O
//숫자 하나 입력 받아서 리턴하는 함수
int inputNumber() {
	int num;
	printf("숫자 입력 : ");
	scanf_s("%d", &num);
	return num;
}

//매개변수 X, 리턴 X
void printMessage() {
	printf("지금부터 홀짝을 판단하는 프로그램을 시작합니다.\n");
}

//매개변수 O, 리턴 X
void printResult(int n, int r) {
	printf("숫자 %d는 ", n);
	if (r)
		printf("홀수 입니다.\n");
	else
		printf("짝수 입니다.\n");
}
int main(void) {
	int n;
	printMessage();
	n = inputNumber();
	printResult(n, checkOddEven(n));

	return 0;
}