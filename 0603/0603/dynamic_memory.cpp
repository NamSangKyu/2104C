#include <iostream>
#include <cstdlib>
using namespace std;

int main(void) {
    //동적할당으로 정수형 배열 10개짜리 선언
    //malloc 메모리 바이트수를 계산을 직접해야됨
    int *arr1 = (int *)malloc(sizeof(int) * 10);
    free(arr1);

    //C++의 동적할당
    int *arr2 = new int[10];
    delete[] arr2;//메모리 해제

    //변수 1개짜리 일때
    int *num = new int;
    delete num;

    return 0;
}