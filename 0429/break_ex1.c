#include <stdio.h>

int main(void) {
	int i = 1;
	int total = 0;

	//무한루프
	while (1) {
		total += i;

		if (total > 100)
			break; //직접 감싸고 있는 반복문 종료하는 키워드
		i++;
	}

	printf("마지막에 더한 값 : %d\n", i);
	printf("총합 : %d\n", total);

	return 0;
}