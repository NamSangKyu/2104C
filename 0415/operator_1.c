#include <stdio.h>
/*
    ��Ģ ���� : +   -   *    /     %

*/
int main(){
    //������ ���� 2�� ���� �� �Է�
    int n1, n2;
    int result = 0;
    printf("���� �ΰ� �Է� : ");
    scanf_s("%d %d",&n1,&n2);

    result = n1 + n2;//���� ����� result�� ����
    printf("���� ��� : %d\n",result);

    //���� ���
    result = n1 - n2;
    printf("���� ��� : %d\n",result);

    //���� ���
    result = n1 * n2;
    printf("���� ��� : %d\n",result);

    //������ - ��
    result = n1 / n2;
    printf("������(��) ��� : %d\n",result);

    //������ - ������
    result = n1 % n2;
    printf("������(������) ��� : %d\n",result);
    return 0;
}




