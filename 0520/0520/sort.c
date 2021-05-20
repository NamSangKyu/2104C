#include <stdio.h>
/*
    �������� ���� ������� ����
        �������� : ū ���ں��� ���� ���� ������� ����
        �������� : ���� ���ں��� ū ���� ������� ����

*/
//�迭�� �ִ� ��� ������ ����ϴ� �Լ�
void PrintArray(int *arr, int len) {
    //�޾ƿ� �迭�� ������ ���ٷ� ����ϴ� �ڵ� �ۼ�
    int i;
    for (i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
//���� �ΰ��� �ٲٴ� �Լ� - Call by Reference
void SwapNumber(int *a, int *b) {
    //�����Ͱ� ����Ű�� ����� ���� ���� ��ȯ�ϴ� �ڵ� �ۼ�
    int temp = *a;
    *a = *b;
    *b = temp; 
}
//���� ����
void BubleSort(int *arr, int len) {
    int i, j;
    for (i = 0; i < len - 1; i++) {
        for (j = 0; j < len - 1 - j; j++) {
            if (arr[j] > arr[j + 1])
                SwapNumber(&arr[j], &arr[j + 1]);
        }
        printf("%d pass : ", i + 1);
        PrintArray(arr, len);
    }
}
void SelectSort(int *arr, int len) {
    //�������� ����
    int i, j;
    for (i = 0; i < len - 1; i++) {
        for (j = i+1; j < len; j++) {
            if (arr[j] < arr[i])
                SwapNumber(&arr[j], &arr[i]);
        }
        printf("%d pass : ", i + 1);
        PrintArray(arr, len);
    }
}
void InsertSort(int *arr, int len) {
    int i, j;
    for (i = 0; i < len; i++) {
        //���� �Է�
        printf("���� �Է� : ");
        scanf_s("%d", &arr[i]);
        //���� ����
        for (j = i; j > 0 && arr[j] < arr[j - 1]; j--) {
            SwapNumber(&arr[j], &arr[j - 1]);
        }
        PrintArray(arr, len);
    }
}
int main(void) {
    int arr1[] = {8,4,6,9,7,1};
    int arr2[] = {8,4,6,9,7,1};
    int arr3[6];
    //BubleSort(arr1, 6);
    //SelectSort(arr2, 6);
    InsertSort(arr3, 6);
    return 0;
}







