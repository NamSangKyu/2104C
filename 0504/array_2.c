#include <stdio.h>
int main(void) {
	//정수형 배열 5개 짜리 선언
	int arr[5] = { 0 };
	//선언한 배열에 숫자를 전부 입력
	int i, total, max, min;
	for (i = 0; i < 5; i++) {
		printf("숫자 입력 : ");
		scanf_s("%d", &arr[i]);
	}
	//데이터 셋팅 완료
	//---------------------------------------
	//배열에 있는 모든 값을 더한 총합 결과를 출력
	//배열에 있는 값들 중 제일 큰 값을 출력
	//배열에 있는 값들 중 제일 작은 값을 출력
	total = max = min = arr[0];
	for (i = 1; i < 5; i++) {
		total += arr[i];
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}
	printf("총합 : %d\n", total);
	printf("최대값 : %d\n", max);
	printf("최소값 : %d\n", min);
	return 0;
}