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
    //2. top ����
    stack->top--;
    //3. ������ ������ ���
    printf("pop : %d\n", stack->arr[stack->top]);
}
int main(void) {
    //���� ����
    Stack stack = { {0}, 0 };
    
    int no=-1;
    while (no != 0) {
        printf("1. Data push\n");
        printf("2. Data pop\n");
        printf("0. Exit\n");
        printf("input number : ");
        scanf_s("%d", &no);
        if (no == 1)
            push(&stack);
        else if(no == 2)
            pop(&stack);
    }
    
    
    return 0;
}