#include <stdio.h>
void PrintArray(int *arr, int len) {
    //받아온 배열의 내용을 한줄로 출력하는 코드 작성
    int i;
    for (i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
void QuickSort(int *arr, int left, int right) {
    int pl = left;
    int pr = right;
    int x = arr[(pl + pr) / 2];

    do {
        while (arr[pl] < x)pl++;
        while (arr[pr] > x)pr--;
        if (pl <= pr) {
            int temp = arr[pl];
            arr[pl] = arr[pr];
            arr[pr] = temp;
            pl++;
            pr--;
        }
    } while (pl <= pr);
    PrintArray(&arr[left], right - left + 1);
    if (left < pr) QuickSort(arr, left, pr);
    if (right > pl) QuickSort(arr, pl, right);
}
int main(void) {
    int arr[] = { 5,8,4,2,6,1,3,9,7 };
    int i;
    QuickSort(arr, 0, 8);
    for (i = 0; i < 9; i++)
        printf("%d ", arr[i]);


    return 0;
}