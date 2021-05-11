#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int size=10;
    int *arr;
    int i;
    printf("배열 개수 입력 : ");
    scanf_s("%d", &size);
    
    //malloc : 메모리 동적할당을 하는 함수
    arr = (int *)malloc(size * sizeof(int));
    for (i = 0; i < size; i++) {
        printf("숫자 입력 : ");
        scanf_s("%d", &arr[i]);
    }

    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    

    return 0;
}
