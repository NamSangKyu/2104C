#include <stdio.h>
int sum(int n1, int n2) {
	printf("sum - %d, %d\n", &n1, &n2);
	return n1 + n2;
}
/*
	��������(local variable) : {}�������� �����ϴ� ���� - stack �޸� ���
							  { ���η� ���� �ʿ��� ������ �޸𸮿� �Ҵ�
							  } �Լ��� ������ �Ǵ� {} ������ ������ ����ߴ� �޸𸮴� ��� ȸ��
*/
int main(void) {
	int n1 = 10, n2 = 20;

	sum(n1, n2);
	printf("main - %d, %d\n", &n1, &n2);

	if (1) {
		int n1 = 100;
		int n = -5;
		printf("if - %d %d\n", n1, &n1);
	}
	//n++;//if���� �����鼭 ȸ����
	return 0;
}