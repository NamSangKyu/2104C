#include <stdio.h>

int sum(int n1, int n2) {
	int count = 0; //��������
	//static���� ����� ������ ���� �ѹ��� �Ҵ�
	static int static_count = 0; //static ����
	count++;
	static_count++;
	printf("count : %d,static_count : %d\n", count, static_count);
	return n1 + n2;
}

int main(void) {
	sum(10, 20);
	sum(10, 20);
	sum(10, 20);
	sum(10, 20);
	sum(10, 20);
	return 0;
}