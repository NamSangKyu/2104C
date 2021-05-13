#include <stdio.h>
#include <stdlib.h>

char * inputString() {
	//char str[50];//지역 변수이기 때문에 함수가 끝나면 해당 배열은 사라짐
	char *str = (char *)malloc(sizeof(char) * 50);//동적할당은 Heap 메모리를 쓰기때문에 함수가 끝나도 메모리는 해제되지 않음, free를 해야 해제

	printf("문자열 입력 : ");
	scanf_s("%s", str,50);
	//scanf("%s", str);
	return str;
}

int main(int argc, char* argv[]) {
	char *str = inputString();
	printf("%s\n", str);
	return 0;
}