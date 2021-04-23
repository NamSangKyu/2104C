#include <stdio.h>
/*
		줄번호	별개수
*		1		1
**		2		2
***		3		3
****	4		4
*****	5		5

*/

int main(void)
{
	int star, line;

	for (line = 1; line < 6; line++) {
		for (star = 0; star < line; star++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}