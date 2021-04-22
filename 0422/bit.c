#include <stdio.h>
/*
	AND			둘다 1일때만 1이되는 연산
	OR			둘중에 하나라도 1이면 1이되는 연산
	NOT			0이면 1로 1이면 0으로 변경
	XOR			양쪽 값이 서로 달라야 1이 되는 연산

	L-Shift		해당 변수의 비트를 왼쪽으로 이동시키는 연산
	R-Shift		해당 변수의 비트를 오른쪽으로 이동시키는 연산

*/
//15 - 1111,   10 - 1010
int main(void) {
	int n1 = 15, n2 = 10;
	int result;
	//		1111
	//		1010
	//     &1010 
	result = n1 & n2; //10
	printf("bit and : %d\n", result);
	result = n1 | n2; //15
	printf("bit or : %d\n", result);
	result = n1 ^ n2; //5
	printf("bit xor : %d\n", result);
	result = ~n1;
	printf("bit not : %d\n", result);
	result = n1 << 2;
	printf("left shift : %d\n", result);
	result = n1 >> 2;
	printf("right shift : %d\n", result);
	return 0;
}
