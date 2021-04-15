#include <stdio.h>

int main(){
    int n1, n2, n3, result;

    //정수 3개 n1, n2, n3에 입력
    printf("숫자 3개 입력 하세요 : ");
    scanf_s("%d %d %d",&n1, &n2, &n3);

    //n1 + n2 * n3 결과 출력
    result = n1 + n2 * n3;
    printf("n1 + n2 * n3 = %d\n",result);
    //(n1 + n2) * n3 결과 출력
    result = (n1 + n2) * n3;
    printf("(n1 + n2) * n3 = %d\n",result);
    //(n1 + n2) * (n2 - n3) / (n3 + n1) 결과 출력
    result = (n1 + n2) * (n2 - n3) / (n3 + n1);
    printf("(n1 + n2) * (n2 - n3) / (n3 + n1) = %d\n",result);


    return 0;
}
