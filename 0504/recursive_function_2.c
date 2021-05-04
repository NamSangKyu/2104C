#include <stdio.h>
/*
	파일명 : recursive_function_2.c

	재귀함수로 매개변수로 받은 숫자의 팩토리얼 값을 구함
*/
int fac(int n) {
	if (n > 1)
		return n * fac(n - 1);
	return 1;
}
int fac2(int n) {
	static int result = 1;
	result *= n;
	if(n>1)
		fac2(n - 1);
	return result;
}
//return 5 * [return 4 * [return 3 * [return 2 * fac(1)]]]
int main(void){
	printf("5! : %d\n", fac(5));//120
	printf("5! : %d\n", fac2(5));//120
	printf("6! : %d\n", fac(6));//720
	//static은 누적 시키기 때문에 데이터가 비워지지 않음
	printf("6! : %d\n", fac2(6));
	return 0;
}
