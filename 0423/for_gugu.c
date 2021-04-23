#include <stdio.h>

int main(void) {
	int dan, is;
	
	for (dan = 2; dan < 10; dan++) {
		for (is = 1; is < 10; is++) {
			printf("%d * %d = %d\n", dan, is, dan * is);
		}
	}
	return 0;
}