#include <stdio.h>

int main(void) {
    //배열 5개짜리 선언, 초기화
    int arr[5] = { 1,2,3,4,5 };
    double arr2[5];
    int i;
    int* ptr = arr;//int* ptr = &arr[0];

    for (i = 0; i < 5; i++)
        printf("%d\n", &arr[i]);
    printf("-----------\n");
    for (i = 0; i < 5; i++)
        printf("%d\n", &arr2[i]);

    //포인터를 이용하여 배열 전체 출력 - 1
    for (i = 0; i < 5; i++)
        printf("%d ", ptr[i]);//ptr + i;
    printf("\n");

    //포인터를 이용하여 배열 전체 출력 - 2
    ptr = arr;
    while (ptr != arr + 5) {
        printf("%d ", ptr++);
    }
    return 0;
}


