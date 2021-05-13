#include <stdio.h>
/*
	 구조체는 현실세계의 특정 대상을 코드로 표현한 것으로
	 데이터 적인것만 표현을 한 변수의 집합체

	 좌표값 저장하는 구조체
*/
//좌표값 저장하는 구조체 작성 ---> 변수 타입이 된다.
struct Position {
	int xpos;
	int ypos;
};
int main(void) {
	//좌표값 저장하는 구조체를 선언
	struct Position pos;
	struct Position nPos;
	pos.xpos = 10;
	pos.ypos = 20;

	printf("x : %d, y : %d\n", pos.xpos, pos.ypos);

	printf("x 좌표 입력 : ");
	scanf_s("%d", &nPos.xpos);
	printf("y 좌표 입력 : ");
	scanf_s("%d", &nPos.ypos);
	printf("x : %d, y : %d\n", nPos.xpos, nPos.ypos);
	return 0;
}