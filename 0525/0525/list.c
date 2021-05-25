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
        list->count++;
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
void PrintAllNode(List* list) {
    //��ó�� ������ ������ ������ �̵��ϸ鼭 val�� ���
    Node *temp = list->header;
    printf("���� ��� ���� : %d\n", list->count); 
    while (temp != NULL) {
        printf("%d->", temp->val);//������ �����ϰ� �ִ� ���� ���
        temp = temp->next;//������� �̵�
    }
    printf("NULL\n");

}
Node* SearchNode(List* list, int value) {
    //��ó�� ������ ������ ������ �̵�
    Node *temp = list->header;
    while (temp != NULL) {
        if (temp->val == value) {
            printf("�˻��� %d���� �ֽ��ϴ�.\n", temp->val);
            return temp;
        }
        temp = temp->next;//������� �̵�
    }
    printf("�˻��� ���� �����ϴ�.\n");
    return NULL;
}
void UpdateNode(List* list, int search, int update) {
    //search�� �˻�
    //�˻��� ����� ���� ����� ������ update�� ���� ����
}






