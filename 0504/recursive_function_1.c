#include <stdio.h>
/*
	���ϸ� : recursive_function_1.c
	����Լ�
		�Լ� ȣ�� �ÿ� �ڱ� �ڽ��� �� ȣ���ϴ� �Լ�	
*/
void PrintNumber(int n) {
	printf("%d ��° �Լ� ȣ��\n", n);
	if(n <= 10)
		PrintNumber(n+1);
	printf("%d ��° �Լ� ����\n", n);
}

int main(void) {
	PrintNumber(1);

	return 0;
}