#include <stdio.h>

int main(void) {
	//정수형 배열 크기 - 5
	//             0 1 2 3 4
	int arr1[5] = {1,2,3,4,5};
	//정수형 배열 크기 - 7
	//            0 1 2 3 4 5 6
	int arr2[] = {1,2,3,4,5,6,7};
	//정수형 배열 크기 - 5
	//              0 1 2 --> 값의 개수가 모자르면 나머지는 전부 0
	int arr3[5] = { 1,2,3 };
	int i;

	for (i = 0; i < sizeof(arr1)/sizeof(int); i++) {
		printf("%d ", arr1[i]);
	}
	printf("\n");

	for (i = 0; i < 7; i++) {
		printf("%d ", arr2[i]);
	}
	printf("\n");

	for (i = 0; i < 5; i++) {
		printf("%d ", arr3[i]);
	}
	printf("\n");


	return 0;
}