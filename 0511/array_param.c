#include <stdio.h>
//void ArrayAddNum(int arr[], int n) {
void ArrayAddNum(int *arr, int n, int len) {
    int i;
    for (i = 0; i < len; i++)
        arr[i] += n;//*(arr+i) ������ ȿ��
}
void ShowArray(int* arr, int len) {
    int i;
    for (i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main(void) {
    //������ �迭 10��¥�� ����
    //�ʱ�ȭ 1~10���� ������ ��ҿ� �ʱ�ȭ
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int arr2[5] = { 3,4,5,6,7 };
    ArrayAddNum(arr, 3, 10);
    ShowArray(arr, 10);
    ArrayAddNum(arr2, 6, 5);
    ShowArray(arr2, 5);
    return 0;
}