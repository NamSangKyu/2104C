#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int size=10;
    int *arr;
    int i;
    printf("�迭 ���� �Է� : ");
    scanf_s("%d", &size);
    
    //malloc : �޸� �����Ҵ��� �ϴ� �Լ�
    arr = (int *)malloc(size * sizeof(int));
    for (i = 0; i < size; i++) {
        printf("���� �Է� : ");
        scanf_s("%d", &arr[i]);
    }

    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    

    return 0;
}
