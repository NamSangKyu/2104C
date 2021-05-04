#include <stdio.h>
/*
	���ϸ� : recursive_function_2.c

	����Լ��� �Ű������� ���� ������ ���丮�� ���� ����
*/
int fac(int n) {
	if (n > 1)
		return n * fac(n - 1);
	return 1;
}
int fac2(int n) {
	static int result = 1;
	result *= n;
	if(n>1)
		fac2(n - 1);
	return result;
}
//return 5 * [return 4 * [return 3 * [return 2 * fac(1)]]]
int main(void){
	printf("5! : %d\n", fac(5));//120
	printf("5! : %d\n", fac2(5));//120
	printf("6! : %d\n", fac(6));//720
	//static�� ���� ��Ű�� ������ �����Ͱ� ������� ����
	printf("6! : %d\n", fac2(6));
	return 0;
}
