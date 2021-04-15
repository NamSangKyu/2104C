#include <stdio.h>

int main(){

    int n = -1;
    int n1, n2;
    printf("숫자 입력 : ");
    scanf_s("%d",&n);//입력 받을 때 반드시 변수명 앞에 &를 붙임

    printf("입력하신 숫자 : %d\n",n);

    printf("숫자 두개 입력 : ");
    scanf_s("%d %d",&n1,&n2);
    printf("n1 : %d, n2 : %d\n",n1,n2);

    return 0;
}




