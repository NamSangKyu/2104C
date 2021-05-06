#define _CRT_SECURE_NO_WARNINGS //sdl 검사 해제
#include <stdio.h>
int main(void) {
	char str[10];

	printf("문자열 입력 : ");
	//저장할 배열의 사이즈를 반드시 넣어줘야됨
	//배열의 사이즈보다 초과되면 데이터를 읽지 않음
	//scanf_s("%s", str, sizeof(str));
	scanf("%s", str);

	printf("%s\n", str);

	return 0;
}