//variable_1.c
#include <stdio.h>
/*
    변수는 데이터를 하나 저장할 공간

    자료형 변수명;

    자료형
        정수형 : short     int     long    long long       char
        실수형 : float     double

    변수명 짓는 규칫
        1. 알파벳 대소문자, 숫자, 특수문자는 _ (밑줄)만 허용
        2. 변수명은 중복 되면 안됨
        3. 첫 글자는 반드시 알파벳 대소문자나 _로만 시작
        4. 키워드와 동일하게 변수명을 사용할 수 없음
    */

int main(){
    int num = 10;//선언과 동시에 초기화
    int n1=5, n2=20;//동일한 자료형으로 변수를 선언하면 , 찍고 변수명만 지으면됨
    int int1;

    printf("num : %d\n",num);
    printf("n1 : %d, n2 : %d\n",n1,n2);
    return 0;
}




