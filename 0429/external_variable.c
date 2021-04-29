#include <stdio.h>
int count;
/*
	전역 변수 : 어떤 함수에서든 동일하게 접근이 가능한 변수
			   초기화를 하지않으면 자동으로 0으로 초기화
*/
void test() {
	count++;
	printf("count = %d %d\n", count, &count);
}
void localHide() {
	int count = 100;
	printf("local count = %d %d\n", count, &count);
}
int main(void) {
	printf("count = %d %d\n", count, &count);
	count++;
	test();
	localHide();
	printf("count = %d %d\n", count, &count);

	return 0;
}