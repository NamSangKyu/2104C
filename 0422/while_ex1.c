#include <stdio.h>

int main(void) {
	int i=1;
	while (i<11)//() 조건식 ---> while ()에 있는 조건식 true일 동안 반복
	{	//반복할 코드 영역
		printf("Hello World %d\n",i);
		i++;
	}
	return 0;
}