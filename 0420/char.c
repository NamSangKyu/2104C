#include <stdio.h>
/*
	문자형 데이터 타입 - char
	사용하는 서식 문자열 - %c

	char 메모리가 1 byte 만큼 할당 
	1 byte ---> 2^8 ---> 256

	A ---> 65		a ---> 97
	Z ---> 90		z ---> 122
*/
int main(void) {
	char ch1 = 'A', ch2 = 'Z';

	printf("%d %c\n", ch1, ch1);
	printf("%d %c\n", ch2, ch2);
	printf("%c %c\n", 65, 90);
	return 0;
}