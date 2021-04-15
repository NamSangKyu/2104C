#include <stdio.h>
/*
    사칙 연산 : +   -   *    /     %

*/
int main(){
    //정수형 변수 2개 선언 후 입력
    int n1, n2;
    int result = 0;
    printf("숫자 두개 입력 : ");
    scanf_s("%d %d",&n1,&n2);

    result = n1 + n2;//더한 결과를 result에 저장
    printf("덧셈 결과 : %d\n",result);

    //뺄셈 결과
    result = n1 - n2;
    printf("뺄셈 결과 : %d\n",result);

    //곱셈 결과
    result = n1 * n2;
    printf("곱셈 결과 : %d\n",result);

    //나눗셈 - 몫
    result = n1 / n2;
    printf("나눗셈(몫) 결과 : %d\n",result);

    //나눗셈 - 나머지
    result = n1 % n2;
    printf("나눗셈(나머지) 결과 : %d\n",result);
    return 0;
}




