#include <stdio.h>
/*
	논리 연산자 : 조건식이 두개 이상일때 하나의 조건식으로
			     만들어주기 위한 연산자
	AND	: &&  ---> 양쪽의 조건식 true일때만 true 결과가 나오는 연산자
			       (모든 조건을 만족할때만 true)
	OR	: ||  ---> 양쪽의 조건식 중 하나가 true면 결과가 true가 나오는 연산자
				   (두 조건중에 하나라도 true 일때 true)
	NOT	: !   ---> true면 false로 변환, false면 true로 변환

	false : 숫자 0, true : 0이 아닌 숫자, 연산결과 true는 1이 나옴
*/
int main(void) {
	int n1=10, n2=7;
	
	printf("AND연산 결과 : %d\n", n1 > 5 && n2 < 10); //1
	printf("OR연산 결과 : %d\n", n1 > 5 || n2 > 10); // 1
	printf("NOT연산 결과 : %d\n", !(n1 > 5 || n2 > 10)); //0
	printf("NOT연산 결과 : %d\n", !n1); //0
	n1 = -1000;
	printf("NOT연산 결과 : %d\n", !n1); //0

	return 0;
}