#include <stdio.h>
/*
	����(��) ������
	> < >= <= == !=
	��� true(1)�� false(0) ����
*/
int main(void) {
	//���� �ΰ� �Է� �޴� �ڵ�
	int n1=10, n2=7;

	/*printf("���� �ΰ� �Է� : ");
	scanf_s("%d %d", &n1, &n2);*/

	printf("%d\n", n1 > n2);  //1
	printf("%d\n", n1 < n2);  //0
	printf("%d\n", n1 >= n2); //1
	printf("%d\n", n1 <= n2); //0
	printf("%d\n", n1 == n2); //0
	printf("%d\n", n1 != n2); //1
	return 0;
}