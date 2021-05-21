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
    if (queue->count == 0) {
        printf("������� ������ �����ϴ�.\n");
        return;
    }
    printf("%d�� ���� â���� ������\n",queue->arr[queue->front]);
    queue->front = (queue->front + 1) % QUEUE_SIZE;
    queue->count--;
}
int main() {
    Queue queue = { {0},0,0,0 };
    /*
        1. ��⿭ ��ȣ ǥ �߱�
        2. ���� ȣ��
        0. ���α׷� ����
        �޴���ȣ�� �Է��ϼ��� :     
    */
    int no = 0;
    do {
        printf("1. ��⿭ ��ȣ ǥ �߱�\n");
        printf("2. ���� ȣ��\n");
        printf("0. ���α׷� ����\n");
        printf("�޴���ȣ�� �Է��ϼ��� : ");
        scanf_s("%d", &no);
        if (no == 1)
            CreateWaitNumber(&queue);
        else if(no == 2)
            CallWaitNumber(&queue);
    } while (no != 0);
    
    return 0;
}