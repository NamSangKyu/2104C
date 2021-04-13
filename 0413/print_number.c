#include <stdio.h>

int main(void) {
	//"" 내부에있는건 전부다 문자로 취급
	printf("10\n");
	printf("10+20\n");
	printf("10+20=30\n");
	//서식 문자열 - 문자열에서 일정 위치에다가 데이터를 출력하는 문자열
	// %d - 해당 위치에 정수형 데이터를 출력
	printf("%d\n",10);
	printf("%d+%d\n",10,20);
	printf("%d+%d=%d\n",10,20,10+20);

	return 0;
}