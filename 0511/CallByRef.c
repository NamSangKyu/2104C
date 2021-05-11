#include <stdio.h>
//Call By Value�� �Ű������� ���� ���� ����
//ȣ���ϴ� �Լ��� �����ʹ� ���� ������ ����� ������ ���� ��ġ�� ����
void SwapNumberVal(int a, int b) {
	//a�� b�� �ٲٴ� �ڵ�
	int temp = a;
	a = b;
	b = temp;
}
//Call By Reference : �Ű������� ������ ������ �Լ�
//	�Ű������� �������̱⶧���� ������ �ּҰ� ����
//  �ش��ϴ� ������ ������ �������� ������ ����
void SwapNumberRef(int* p1, int* p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
int main(void) {
	int n1 = 10, n2 = 20;

	printf("n1 : %d, n2 : %d\n", n1, n2);
	SwapNumberVal(n1, n2);//n1�� n2�� �ٲ�°�? - X
	printf("n1 : %d, n2 : %d\n", n1, n2);
	SwapNumberRef(&n1, &n2);//n1�� n2�� �ٲ�°�? - O
	printf("n1 : %d, n2 : %d\n", n1, n2);

	return 0;
}