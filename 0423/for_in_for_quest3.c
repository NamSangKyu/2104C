#include <stdio.h>
/*
	 �ٰ����� �Է� : 5

			�ٹ�ȣ	������	���� ����
    *	        1		1		4
   ***	        2		3		3
  *****	        3		5		2
 *******	    4		7		1
*********	    5		9		0

*/
int main(void) {
	int line, star, space, i;

	printf("�� ���� �Է� : ");
	scanf_s("%d", &line);

	for (i = 1; i <= line; i++) {
		for (space = line-i; space > 0; space--) {
			printf(" ");
		}
		for (star = 0; star < i * 2 - 1; star++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}