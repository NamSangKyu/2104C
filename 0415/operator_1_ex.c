#include <stdio.h>

int main(){
    int n1, n2, n3, result;

    //���� 3�� n1, n2, n3�� �Է�
    printf("���� 3�� �Է� �ϼ��� : ");
    scanf_s("%d %d %d",&n1, &n2, &n3);

    //n1 + n2 * n3 ��� ���
    result = n1 + n2 * n3;
    printf("n1 + n2 * n3 = %d\n",result);
    //(n1 + n2) * n3 ��� ���
    result = (n1 + n2) * n3;
    printf("(n1 + n2) * n3 = %d\n",result);
    //(n1 + n2) * (n2 - n3) / (n3 + n1) ��� ���
    result = (n1 + n2) * (n2 - n3) / (n3 + n1);
    printf("(n1 + n2) * (n2 - n3) / (n3 + n1) = %d\n",result);


    return 0;
}
