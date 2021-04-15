#include <stdio.h>
/*
    복합대입연산자
        +=  -=  *=  /=   %=
*/
int main(){

    int n = 10;

    //n = n + 20;
    n += 20; //더한 결과를 해당 변수에 누적하여 적용
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
