#include <stdio.h>
/*
	관계(비교) 연산자
	> < >= <= == !=
	결과 true(1)와 false(0) 나옴
*/
int main(void) {
	//정수 두개 입력 받는 코드
	int n1=10, n2=7;

	/*printf("숫자 두개 입력 : ");
	scanf_s("%d %d", &n1, &n2);*/

	printf("%d\n", n1 > n2);  //1
	printf("%d\n", n1 < n2);  //0
	printf("%d\n", n1 >= n2); //1
	printf("%d\n", n1 <= n2); //0
	printf("%d\n", n1 == n2); //0
	printf("%d\n", n1 != n2); //1
	return 0;
}