#include <stdio.h>
/*
	알파벳 대문자 A부터 Z까지 출력하는 반복문 작성
*/
int main(void) {
	int i = 40;
	while (i < 91) {
		printf("%c ", i++);
	}
	
	/*char ch = 'A';

	while (ch <= 'Z') {
		printf("%c ", ch);
		ch++;
	}*/

	return 0;
}