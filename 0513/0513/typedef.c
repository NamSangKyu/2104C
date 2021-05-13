#include <stdio.h>
/*
	typedef.c

	typedef --> 기존의 변수선언할 떄 사용했던 변수 타입을 
				사용자가 원하는 이름으로 별칭을 지어서 사용
*/
typedef int * PINT;
typedef unsigned int UINT;
struct Position {
	int xpos;
	int ypos;
};
typedef struct Position Pos;
typedef struct Test {
	int a;
	int b;
}test;
int main(void) {
	int num = 20;
	PINT ptr = &num;

	printf("%d %d\n", *ptr, num);
	Pos p = { 10,20 };
	printf("%d %d\n", p.xpos, p.ypos);
	test t = { 5,6 };
	printf("%d %d\n", t.a,t.b);

	return 0;
}