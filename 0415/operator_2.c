#include <stdio.h>
/*
    ���մ��Կ�����
        +=  -=  *=  /=   %=
*/
int main(){

    int n = 10;

    //n = n + 20;
    n += 20; //���� ����� �ش� ������ �����Ͽ� ����
    printf("n : %d\n",n);//30

    n -= 5;
    printf("n : %d\n",n);//25

    n *= 3;
    printf("n : %d\n",n);//75

    n /= 7;
    printf("n : %d\n",n);//10

    n %= 2;
    printf("n : %d\n",n);//0


    return 0;
}
