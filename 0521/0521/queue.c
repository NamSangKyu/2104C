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
    //�����͸� ������ ���
    //front ���� ��ġ�� �̵�
}

int main(void) {
    return 0;
}