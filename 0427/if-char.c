#include <stdio.h>

int main(void) {
	//숫자 두개 입력
	//연산자 입력 받아서 해당하는 연산을 실행
	int n1, n2, result;
	char op;

	printf("숫자 두개 입력 : ");
	scanf_s("%d %d", &n1, &n2);
	
	printf("연산자 입력 : ");
	scanf_s(" %c", &op);

	if (op == '+')
		result = n1 + n2;
	else if(op == '-')
		result = n1 - n2;
	else if(op == '*')
		result = n1 * n2;
	else if(op == '/')
		result = n1 / n2;
	else
		result = n1 % n2;

	printf("%d %c %d = %d\n", n1, op, n2, result);
	return 0;
}