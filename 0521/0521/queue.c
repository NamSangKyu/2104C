#include <stdio.h>

typedef struct queue {
    int arr[11];
    int front;
    int rear;
}Queue;

void AddSchedule(Queue *queue) { //enqueue
    //ť�� �����Ͱ� ���� ä���� �ִ��� üũ
    if ((queue->rear + 1) % 11 == queue->front) {
        printf("�����Ͱ� �������ֽ��ϴ�.\n");
        return;
    }
    //������ �Է�
    printf("���� �Է� : ");
    scanf_s("%d", &queue->arr[queue->rear]);

    //rear�� ���� ��ġ�� �ű�
    queue->rear = (queue->rear + 1) % 11;
}
void RunSchedule(Queue *queue) {//dequeue
    //ť�� ����ִ��� üũ
    if (queue->front == queue->rear) {
        printf("�����Ͱ� �����ϴ�.\n");
        return;
    }
    //�����͸� ������ ���
    printf("dequeue : %d\n", queue->arr[queue->front]);
    //front ���� ��ġ�� �̵�
    queue->front = (queue->front + 1) % 11;
}

int main(void) {
    Queue queue = { {0},0,0 };
    int no = -1;
    while (no != 0) {
        printf("1. Data Enqueue\n");
        printf("2. Data Dequeue\n");
        printf("0. Exit\n");
        printf("input number : ");
        scanf_s("%d", &no);
        if (no == 1)
            AddSchedule(&queue);
        else if (no == 2)
            RunSchedule(&queue);
    }
    return 0;
}