#include <stdio.h>
/*
	1. 문자열을 입력 받은 후 입력 받은 문자열의 글자 개수를 출력
	   글자 개수에는 널문자는 제외하고 개수를 출력

	   문자열 입력 : Hello
	   문자열 개수 : 5
*/
int main(void) {
	
	char str[100];
	int idx=-1;
	int len;
	printf("문자열 입력 : ");
	scanf_s("%s", str, sizeof(str));
	//012345
	//Hello\0 --->널문자가 있는 인덱스 번호가 글자 개수
	while (str[++idx] != '\0');

	printf("문자열 개수 : %d\n", idx);
	len = idx;
	//입력한 문자열을 반대로 뒤집어서 저장 후 출력
	for (idx = 0; idx < len / 2; idx++) {
		//idx    len-1-idx
		//0  --  4  <-- 5 - 1 - 0
		//1  --  3  <-- 5 - 1 - 1
		char temp = str[idx];
		str[idx] = str[len - 1 - idx];
		str[len - 1 - idx] = temp;
	}
	printf("%s\n", str);
	return 0;
}