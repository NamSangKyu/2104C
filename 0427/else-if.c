#include <stdio.h>

int main(void) {
	/*
		if문
		if( 조건식 ){

		}

		조건식 true 일때만 실행
		if(		){//첫번째 조건식

		}else if(		){//두번째 조건식 

		}else if(		){//

		}else if(		){

		}else{//위에 나열된 조건식이 모두 거짓일때 실행
			//else에는 절대 조건식이 없음!
		}
	*/
	
	/*
		숫자 하나를 입력 받아서 
		3의 배수면 3의 배수 입니다. 출력
		5의 배수면 5의 배수 입니다. 출력
		7의 배수면 7의 배수 입니다. 출력
		어떤 배수인지 알수가 없습니다.  --> else
	*/
	int num;
	printf("숫자 입력 : ");
	scanf_s("%d", &num);

	if (num % 3 == 0) {
		printf("3의 배수입니다.\n");
	}else if (num % 5 == 0) {
		printf("5의 배수입니다.\n");
	}else if (num % 7 == 0) {
		printf("7의 배수입니다.\n");
	}else {
		printf("어떤 배수인지 알수가 없습니다.\n");
	}


	return 0;
}