#include <iostream>

using namespace std;

int main(void) {
    //동적할당으로 정수형 배열 5개짜리를 만들고 숫자를 전부 입력
    //입력한 숫자를 전부 출력
    int length = 5;
    int *arr = new int[length];
    for (int i = 0; i < length; i++) {
        cout << "숫자 입력 : ";
        cin >> arr[i];
    }
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    /*length += 5;
    arr = new int[length];
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }*/
    return 0;
}