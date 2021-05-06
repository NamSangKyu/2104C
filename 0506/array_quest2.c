#include <stdio.h>

int main(void) {
	//정수형 배열 10개짜리 선언, 배열의 모든 요소를 0으로 초기화
	int arr[10] = { 0 };
	int start=0, end=9,i;
	//선언한 배열에 숫자를 입력, 
	//짝수면 마지막 요소부터 채움, 홀수면 맨 앞 요소부터 채움
	while(start <= end){
		int temp;
		printf("숫자 입력 : ");
		scanf_s("%d", &temp);
		if (temp % 2) {
			arr[start++] = temp;//배열에 요소 저장후 start 증가
		}
		else {
			arr[end--] = temp;
		}
	}
	
	//전부 채우고 나면 배열의 있는 모든 요소를 순서대로 출력
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);

	return 0;
}