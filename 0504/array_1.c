#include <stdio.h>
/*
	파일명 : array_1.c
	
	배열(Array) 
		하나의 변수명으로 여러개의 변수를 선언하는 문법

	인덱스(index)
		배열의 요소에 접근하기위한 번호표
		인덱스는 0부터 시작~ 배열 개수 - 1
*/
int main(void) {
	//배열 선언 방법 - 변수타입 변수명[개수]
	int arr[3];

	//각 배열 요소 접근 방법 - 인덱스 번호를 이용 --> 변수명[인덱스]
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;

	printf("%d\n", arr[0]);
	printf("%d\n", arr[1]);
	printf("%d\n", arr[2]);

	return 0;
}