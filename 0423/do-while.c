#include <stdio.h>

int main(void) {
	int i = 5;
	//처음 조건이 거짓이더라도 단 한번은 실행을 해준다.
	do {
		printf("Hello World\n");
		i++;
	} while (i < 5);

	return 0;
}