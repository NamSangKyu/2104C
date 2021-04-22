#include <stdio.h>
/*
	AND			�Ѵ� 1�϶��� 1�̵Ǵ� ����
	OR			���߿� �ϳ��� 1�̸� 1�̵Ǵ� ����
	NOT			0�̸� 1�� 1�̸� 0���� ����
	XOR			���� ���� ���� �޶�� 1�� �Ǵ� ����

	L-Shift		�ش� ������ ��Ʈ�� �������� �̵���Ű�� ����
	R-Shift		�ش� ������ ��Ʈ�� ���������� �̵���Ű�� ����

*/
//15 - 1111,   10 - 1010
int main(void) {
	int n1 = 15, n2 = 10;
	int result;
	//		1111
	//		1010
	//     &1010 
	result = n1 & n2; //10
	printf("bit and : %d\n", result);
	result = n1 | n2; //15
	printf("bit or : %d\n", result);
	result = n1 ^ n2; //5
	printf("bit xor : %d\n", result);
	result = ~n1;
	printf("bit not : %d\n", result);
	result = n1 << 2;
	printf("left shift : %d\n", result);
	result = n1 >> 2;
	printf("right shift : %d\n", result);
	return 0;
}
