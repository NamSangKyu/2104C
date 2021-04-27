#include <stdio.h>
/*
	파일명 : if_quest1.c

	숫자 1부터 100까지의 숫자 중
	3과 5의 배수만 출력하시오
	단 3과 5의 공배수는 한번만 출력 
*/
int main(void) {
	int i;

	for (i = 1; i < 101; i++) {
		if(i % 3 == 0 || i % 5 == 0)
			printf("%d ", i);
	}
	return 0;
}