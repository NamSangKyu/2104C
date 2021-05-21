#include <stdio.h>

typedef struct queue {
    int arr[11];
    int front;
    int rear;
}Queue;

void AddSchedule(Queue *queue) { //enqueue
    //큐에 데이터가 전부 채워져 있는지 체크
    if ((queue->rear + 1) % 11 == queue->front) {
        printf("데이터가 가득차있습니다.\n");
        return;
    }
    //데이터 입력
    printf("숫자 입력 : ");
    scanf_s("%d", &queue->arr[queue->rear]);

    //rear를 다음 위치로 옮김
    queue->rear = (queue->rear + 1) % 11;
}
void RunSchedule(Queue *queue) {//dequeue
    //큐가 비어있는지 체크
    //데이터를 꺼내서 출력
    //front 다음 위치로 이동
}

int main(void) {
    return 0;
}