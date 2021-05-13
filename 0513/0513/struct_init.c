#include <stdio.h>
/*
	구조체 초기화하는 예제
	구조체도 변수이기 때문에 선언하면서 초기화
*/
//원의 정보를 저장할 구조체
//원의 정보 : 좌표값, 반지름값
/*
struct Position {
	int xpos;
	int ypos;
};
struct Circle {
	struct Position pos;
	int r;
};
*/
struct Circle {
	int xpos;
	int ypos;
	int r;
};
int main(void) {
	//					xpos,ypos,r 이 순서대로 데이터가 저장
	struct Circle cir = {3,4,6};
	//구조체 내에 선언된 변수들은 순서대로 할당
	printf("xpos address : %d\n", &cir.xpos);
	printf("ypos address : %d\n", &cir.ypos);
	printf("r address : %d\n", &cir.r);
	printf("xpos : %d\n", cir.xpos);
	printf("ypos : %d\n", cir.ypos);
	printf("r : %d\n", cir.r);
	return 0;
}
