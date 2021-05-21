#include <stdio.h>
typedef struct stack {
    int arr[12];
    int top;
}Stack;

void push(Stack *stack) {//1. 19:34
    //1. 저장할 공간이 있는지 체크
    if (stack->top == 12) {
        printf("stack에 더 이상 저장할 공간이 없습니다.\n ");
        return;
    }
    //2. 저장할 공간이 있으면 데이터 입력
    printf("데이터 입력 : ");
    scanf_s("%d", &stack->arr[stack->top]);
    //3. 데이터 입력 후 top 증가
    stack->top++;
}
void pop(Stack *stack) { //2. 19:45
    //1. 꺼낼 데이터가 있는지 체크
    if (stack->top == 0) {
        printf("저장된 데이터가 없습니다.\n");
        return;
    }
    //2. 마지막 데이터 출력
    printf("pop : %d\n", stack->arr[stack->top]);
    //3. top 감소
    stack->top--;
}
int main(void) {
    //스택 선언
    Stack stack;
    
    /*
        1. Data push
        2. Data pop
        0. Exit
        input number : 
    */
    
    return 0;
}