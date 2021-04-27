#include <stdio.h>
/*
	파일명 : score.c
*/
int main(void) {
	/*
		점수(0~100)하나 입력을 받아서
		아래에 해당하는 데이터 범위에 맞는 성적 등급을 출력

		90~100 A등급
		80~89  B등급
		70~79  C등급
		50~69  D등급
		0 ~49  F등급
	*/
	int score;

	printf("점수 입력 : ");
	scanf_s("%d", &score);

	if (score >= 90 && score <= 100) 
		printf("A 등급\n");
	else if (score >= 80) 
		printf("B 등급\n");
	else if (score >= 70) 
		printf("C 등급\n");
	else if (score >= 50) 
		printf("D 등급\n");
	else 
		printf("F 등급\n");
	


	return 0;
}