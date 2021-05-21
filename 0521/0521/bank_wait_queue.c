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

}
int main() {
    Queue queue = { {0},0,0,0 };
    
    return 0;
}