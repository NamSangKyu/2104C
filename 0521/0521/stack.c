#include <stdio.h>
typedef struct stack {
    int arr[12];
    int top;
}Stack;

void push(Stack *stack) {//1. 19:34
    //1. ������ ������ �ִ��� üũ
    if (stack->top == 12) {
        printf("stack�� �� �̻� ������ ������ �����ϴ�.\n ");
        return;
    }
    //2. ������ ������ ������ ������ �Է�
    printf("������ �Է� : ");
    scanf_s("%d", &stack->arr[stack->top]);
    //3. ������ �Է� �� top ����
    stack->top++;
}
void pop(Stack *stack) { //2. 19:45
    //1. ���� �����Ͱ� �ִ��� üũ
    if (stack->top == 0) {
        printf("����� �����Ͱ� �����ϴ�.\n");
        return;
    }
    //2. ������ ������ ���
    printf("pop : %d\n", stack->arr[stack->top]);
    //3. top ����
    stack->top--;
}
int main(void) {
    //���� ����
    Stack stack;
    
    /*
        1. Data push
        2. Data pop
        0. Exit
        input number : 
    */
    
    return 0;
}