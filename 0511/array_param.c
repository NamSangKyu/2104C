#include <stdio.h>
//void ArrayAddNum(int arr[], int n) {
void ArrayAddNum(int *arr, int n, int len) {
    int i;
    for (i = 0; i < len; i++)
        arr[i] += n;//*(arr+i) 동일한 효과
}
void ShowArray(int* arr, int len) {
    int i;
    for (i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main(void) {
    //정수형 배열 10개짜리 선언
    //초기화 1~10까지 각각의 요소에 초기화
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int arr2[5] = { 3,4,5,6,7 };
    ArrayAddNum(arr, 3, 10);
    ShowArray(arr, 10);
    ArrayAddNum(arr2, 6, 5);
    ShowArray(arr2, 5);
    return 0;
}