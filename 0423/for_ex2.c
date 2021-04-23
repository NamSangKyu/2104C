#include <stdio.h>
/*
	알파벳 대문자 A부터 Z까지 출력하는 반복문 작성
*/
int main(void) {

	char ch;

	for (ch = 'A'; ch <= 'Z'; ch++) {
		printf("%c ", ch);
	}


	return 0;
}