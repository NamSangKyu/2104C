#include <stdio.h>

int main(void) {
	//������ �迭 ũ�� - 5
	//             0 1 2 3 4
	int arr1[5] = {1,2,3,4,5};
	//������ �迭 ũ�� - 7
	//            0 1 2 3 4 5 6
	int arr2[] = {1,2,3,4,5,6,7};
	//������ �迭 ũ�� - 5
	//              0 1 2 --> ���� ������ ���ڸ��� �������� ���� 0
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