#include <stdio.h>

int main(void) {
    int* p1 = 10;
    double* p2 = 10;
    //p1�� p2 �޸� 10���� ����Ŵ

    //�����͸� ���� �� ������ �ϸ�
    //�ش� �����Ͱ� ����Ű�� ���� Ÿ�� ��ŭ ���ؼ� ����/����
    printf("%d %d\n", p1 + 1, p1 + 2);
    printf("%d %d\n", p2 + 1, p2 + 2);
    return 0;
}