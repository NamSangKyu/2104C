#include <stdio.h>

int main(void) {
    int arr[10];
    int* start = arr;
    int* end = &arr[9];

    while (start <= end) {
        int temp;
        printf("���� �Է� : ");
        scanf_s("%d", &temp);
        if (temp % 2 == 0) {
            *end = temp;
            end--;
        }else {
            *start = temp;
            start++;
        }
    }
    start = arr;
    while (start < &arr[10]) printf("%d ", *start++);


    return 0;
}