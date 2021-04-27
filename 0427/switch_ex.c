#include <stdio.h>

/*
	파일명 : switch_ex.c
	switch 예제	
*/

int main(void) {
	int n;
	printf("1~5까지 숫자를 입력하세요 : ");
	scanf_s("%d", &n);

	/*
		switch는 조건식 X, 오로지 정수값만 이용해서 처리
	*/
	switch (n) {//switch ()에는 무조건 값이 들어감
	case 1://if(n==1)
		printf("One\n");
		break;//switch문을 종료
	case 2://else if(n==2)
		printf("Two\n");
		break;
	case 3:
		printf("Third\n");
		break;
	case 4:
		printf("four\n");
		break;
	case 5:
		printf("five\n");
		break;
	default://else 동일한 효과
		printf("숫자를 잘못 입력하셨습니다.\n");
	}
	return 0;
}