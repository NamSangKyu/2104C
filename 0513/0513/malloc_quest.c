/*
	파일명 : malloc_quest.c

	최초에 동적할당으로 배열을 5개에 해당하는 메모리를 할당
	할당 받은 메모리에 숫자를 입력 받을때, 숫자 0을 입력할떄까지 계속 입력
	입력 받을때 모든 배열에 내용을 입력하면,
	매변 배열 개수를 3개씩 늘려나가면서 입력 받음,
	0을 입력하는 순간 입력한 내용을 전부 더하여 출력
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int *arr;
	int size=5, i=0, sum=0;

	//동적할당
	arr = (int *)malloc(sizeof(int) * size);

	//무한루프
	while (1) {
		printf("숫자 입력 : ");
		scanf_s("%d", &arr[i]);
		if (arr[i] == 0) break;
		i++;
		if (i == size) {//배열을 전부 사용
			size += 3;
			arr = (int *)realloc(arr, sizeof(int)*size);
		}
	}
	i = 0;
	while (arr[i] != 0) {
		sum += arr[i++];
	}
	printf("입력하신 숫자들의 총합 : %d\n", sum);
	free(arr);
	//해제 후 실행 결과
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);

	return 0;
}
