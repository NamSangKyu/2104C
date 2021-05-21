#include <stdio.h>
#define QUEUE_SIZE 100
typedef struct queue {
    int arr[QUEUE_SIZE];
    int front;
    int rear;
    int count;
}Queue;
//enqueue - 은행 대기열 번호 생성
void CreateWaitNumber(Queue *queue) {
    static int waitNumer = 0;
    if ((queue->rear + 1) % QUEUE_SIZE == queue->front) {
        printf("대기인원이 가득차 있습니다. 잠시후 다시 오세요\n");
        return;
    }
    queue->arr[queue->rear] = ++waitNumer;
    printf("%d번 고객님 앞에 %d명 있습니다.\n", queue->arr[queue->rear],queue->count);
    queue->count++;
    queue->rear = (queue->rear + 1) % QUEUE_SIZE;

}
//dequeue - 은행원이 고객님 호출하는 부분
void CallWaitNumber(Queue *queue) {
    if (queue->count == 0) {
        printf("대기중인 고객님이 없습니다.\n");
        return;
    }
    printf("%d번 고객님 창구로 오세요\n",queue->arr[queue->front]);
    queue->front = (queue->front + 1) % QUEUE_SIZE;
    queue->count--;
}
int main() {
    Queue queue = { {0},0,0,0 };
    /*
        1. 대기열 번호 표 발급
        2. 고객님 호출
        0. 프로그램 종료
        메뉴번호를 입력하세요 :     
    */
    int no = 0;
    do {
        printf("1. 대기열 번호 표 발급\n");
        printf("2. 고객님 호출\n");
        printf("0. 프로그램 종료\n");
        printf("메뉴번호를 입력하세요 : ");
        scanf_s("%d", &no);
        if (no == 1)
            CreateWaitNumber(&queue);
        else if(no == 2)
            CallWaitNumber(&queue);
    } while (no != 0);
    
    return 0;
}