#include <stdio.h>
/*
    여러개의 값을 순서대로 정렬
        내림차순 : 큰 숫자부터 작은 숫자 순서대로 정렬
        오름차순 : 작은 숫자부터 큰 숫자 순서대로 정렬

*/
//배열에 있는 모든 내용을 출력하는 함수
void PrintArray(int *arr, int len) {
    //받아온 배열의 내용을 한줄로 출력하는 코드 작성
    int i;
    for (i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
//숫자 두개를 바꾸는 함수 - Call by Reference
void SwapNumber(int *a, int *b) {
    //포인터가 가리키는 대상의 값을 서로 교환하는 코드 작성
    int temp = *a;
    *a = *b;
    *b = temp; 
}
//버블 정렬
void BubleSort(int *arr, int len) {
    int i, j;
    for (i = 0; i < len - 1; i++) {
        for (j = 0; j < len - 1; j++) {
            if (arr[j] > arr[j + 1])
                SwapNumber(&arr[j], &arr[j + 1]);
        }
        printf("%d pass : ", i + 1);
        PrintArray(arr, len);
    }
}
int main(void) {
    int arr1[] = {8,4,6,9,7,1};
    BubleSort(arr1, 6);
    return 0;
}







