#include <stdio.h>
// 5! = 120 ---> 1*2*3*4*5  -->���丮��
/*
	�����ϳ��� �Է� �޾Ƽ� �ش��ϴ� ������ ���丮�� ���� ���
*/
int main(void) {
	int n, fac;

	printf("�����ϳ� �Է� : ");
	scanf_s("%d", &n);

	for (fac = 1 ; n > 1; n--) {
		fac *= n;
	}
	printf("�Է��Ͻ� ������ ���丮�� ���� %d\n", fac);
	return 0;
}