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

}
int main(void) {
    int arr1[] = {8,4,6,9,7,1};
    BubleSort(arr1, 6);
    return 0;
}