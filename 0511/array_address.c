#include <stdio.h>

int main(void) {
    //�迭 5��¥�� ����, �ʱ�ȭ
    int arr[5] = { 1,2,3,4,5 };
    double arr2[5];
    int i;
    int* ptr = arr;//int* ptr = &arr[0];

    for (i = 0; i < 5; i++)
        printf("%d\n", &arr[i]);
    printf("-----------\n");
    for (i = 0; i < 5; i++)
        printf("%d\n", &arr2[i]);

    //�����͸� �̿��Ͽ� �迭 ��ü ��� - 1
    for (i = 0; i < 5; i++)
        printf("%d ", ptr[i]);//ptr + i;
    printf("\n");

    //�����͸� �̿��Ͽ� �迭 ��ü ��� - 2
    ptr = arr;
    while (ptr != arr + 5) {
        printf("%d ", ptr++);
    }
    return 0;
}


