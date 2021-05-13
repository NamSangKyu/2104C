#include <stdio.h>
#include <stdlib.h>
//void * 는 메모리 주소를 전달하는 용으로 쓰임
//void는 데이터를 저장할 수 있는 메모리 포멧이 없음, 값을 저장 X
//포인터는 메모리 주소값만 저장할 수 있기 떄문에 무조건 주소값을 담고 만 있고
//직접적인 계산을 할수는 없음
int main(void) {
	//malloc의 인수에는 무조건 양수만 전달됨
	int *arr = (int *)malloc(sizeof(int)*5);//20byte 할당
	int i;

	for (i = 0; i < 5; i++) {
		arr[i] = (i + 1) * 5;
		printf("%d ", arr[i]);
	}
	printf("\n");
	arr = (int *)realloc(arr,sizeof(int)*3);
	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
		//arr[i] = (i + 1) * 3;//이미 반납한 메모리에 접근해서 데이터 쓰기 시도
	}
	free(arr);
	return 0;
}