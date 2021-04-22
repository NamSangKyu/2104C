#include <stdio.h>

int main(void) {
	int dan, is;
	dan = 2;
	while (dan < 10) {
		is = 1;//중첩된 반복문에서는 반드시 초기화를 체크
		while (is < 10) {
			printf("%d * %d = %d\n", dan, is, dan * is);
			is++;
		}
		dan++;
	}

	return 0;

}