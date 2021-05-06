#include <stdio.h>

int main(void) {

	char str[50];

	int i=0;

	printf("문자열 입력 : ");
	scanf_s("%s", str, sizeof(str));
	//널문자 --> '\0',  널문자 아스키 코드값 --> 0
	//입력한 글자까지만 출력이 되게끔 반복문을 변경
	while (str[i] != 0) {
		putchar(str[i++]);//문자 하나만 출력
		printf("\n");
	}
	return 0;
}