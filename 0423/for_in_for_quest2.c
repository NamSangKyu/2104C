#include <stdio.h>
/*
		줄번호	별개수	공백 개수
    *	1		1		4
   **	2		2		3
  ***	3		3		2
 ****	4		4		1
*****	5		5		0

*/
int main(void) {
	int star, line, space;

	for (line = 1; line < 6; line++) {
		for (space = 5 - line; space > 0; space--) {
			printf(" ");
		}
		for (star = 0; star < line; star++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}