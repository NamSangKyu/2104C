#include <iostream>

using namespace std;

int main(void) {
    //�����Ҵ����� ������ �迭 5��¥���� ����� ���ڸ� ���� �Է�
    //�Է��� ���ڸ� ���� ���
    int length = 5;
    int *arr = new int[length];
    for (int i = 0; i < length; i++) {
        cout << "���� �Է� : ";
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