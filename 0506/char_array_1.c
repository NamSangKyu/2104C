#include<stdio.h>
int main() {
	char str[] = "Hello World";
	int i;
	//문자열 마지막에는 널문자(문자코드값 0)
	printf("%d\n", sizeof(str));
	//문자열 출력
	printf("%s\n", str);
	printf("%d\n", str); //배열 이름만 나오면 배열의 첫번째 메모리 주소값

	for (i = 0; i < sizeof(str); i++) {
		printf("%c %d %d\n", str[i], str[i], &str[i]);
	}


	return 0;
}