#include <stdio.h>
/*
	 줄개수를 입력 : 5

			줄번호	별개수	공백 개수
    *	        1		1		4
   ***	        2		3		3
  *****	        3		5		2
 *******	    4		7		1
*********	    5		9		0

*/
int main(void) {
	int line, star, space, i;

	printf("줄 개수 입력 : ");
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