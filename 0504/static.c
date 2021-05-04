#include <stdio.h>

int sum(int n1, int n2) {
	int count = 0; //지역변수
	//static으로 선언된 변수는 최초 한번만 할당
	static int static_count = 0; //static 변수
	count++;
	static_count++;
	printf("count : %d,static_count : %d\n", count, static_count);
	return n1 + n2;
}

int main(void) {
	sum(10, 20);
	sum(10, 20);
	sum(10, 20);
	sum(10, 20);
	sum(10, 20);
	return 0;
}