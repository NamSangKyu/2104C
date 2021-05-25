#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void AddNode(List* list, int value) {
    //�޾ƿ� �����͸� ������ ������ - �����Ҵ� --> ������ ��尡 ���� ������ ��
    Node *node = (Node *)malloc(sizeof(Node));
    node->val = value;
    node->next = NULL;
    //����Ʈ���� ������ ��带 ã�� - ������ ���� next �����Ͱ� NULL
    Node *temp = list->header; //����Ʈ ù��° ��带 �о��(ù��° ��带 ���)
    if (temp == NULL) {
        list->header = node;
        return;//ù��° ��� ���� �� �Լ� ����
    }
    //�ι�° ������ �����ϴ� �κ�
    //������ ������ �̵�
    while(temp->next != NULL)
        temp = temp->next;
    //������ ��� next�� ���� ���� ����� �ּҰ��� ����
    temp->next = node;
    list->count++;//�����ϰ� �ִ� ��� ���� ����

}