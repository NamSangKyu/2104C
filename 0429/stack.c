#include <stdio.h>
int sum(int n1, int n2) {
	printf("sum - %d, %d\n", &n1, &n2);
	return n1 + n2;
}
/*
	지역변수(local variable) : {}내에서만 생존하는 변수 - stack 메모리 사용
							  { 내부로 들어갈때 필요한 변수를 메모리에 할당
							  } 함수가 끝나면 또는 {} 영역이 끝나면 사용했던 메모리는 모두 회수
*/
int main(void) {
	int n1 = 10, n2 = 20;

	sum(n1, n2);
	printf("main - %d, %d\n", &n1, &n2);

	if (1) {
		int n1 = 100;
		int n = -5;
		printf("if - %d %d\n", n1, &n1);
	}
	//n++;//if문이 끝나면서 회수됨
	return 0;
}