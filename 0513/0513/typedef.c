#include <stdio.h>
/*
	typedef.c

	typedef --> ������ ���������� �� ����ߴ� ���� Ÿ���� 
				����ڰ� ���ϴ� �̸����� ��Ī�� ��� ���
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