#include <stdio.h>
int count;
/*
	���� ���� : � �Լ������� �����ϰ� ������ ������ ����
			   �ʱ�ȭ�� ���������� �ڵ����� 0���� �ʱ�ȭ
*/
void test() {
	count++;
	printf("count = %d %d\n", count, &count);
}
void localHide() {
	int count = 100;
	printf("local count = %d %d\n", count, &count);
}
int main(void) {
	printf("count = %d %d\n", count, &count);
	count++;
	test();
	localHide();
	printf("count = %d %d\n", count, &count);

	return 0;
}