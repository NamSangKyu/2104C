#include <stdio.h>
#define QUEUE_SIZE 100
typedef struct queue {
    int arr[QUEUE_SIZE];
    int front;
    int rear;
    int count;
}Queue;
//enqueue - ���� ��⿭ ��ȣ ����
void CreateWaitNumber(Queue *queue) {
    static int waitNumer = 0;
    if ((queue->rear + 1) % QUEUE_SIZE == queue->front) {
        printf("����ο��� ������ �ֽ��ϴ�. ����� �ٽ� ������\n");
        return;
    }
    queue->arr[queue->rear] = ++waitNumer;
    printf("%d�� ���� �տ� %d�� �ֽ��ϴ�.\n", queue->arr[queue->rear],queue->count);
    queue->count++;
    queue->rear = (queue->rear + 1) % QUEUE_SIZE;

}
//dequeue - ������� ���� ȣ���ϴ� �κ�
void CallWaitNumber(Queue *queue) {

}
int main() {
    Queue queue = { {0},0,0,0 };
    
    return 0;
}