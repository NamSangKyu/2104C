#pragma once
#ifndef __LIST_H__
#define __LIST_H__
//���� �Ѱ��� �����͸� ��Ÿ��
typedef struct node {
    int val;//��
    struct node  * next; // ���� ��� ���� - ������ ���� ���� ��尡 ���� ������ NULL
}Node;

typedef struct list {
    Node* header;//ù��° ��� - ó������ �����Ͱ� ���� �����̱� ������ NULL�� �ʱ�ȭ
    int count;//���� ����Ʈ�� ����� ���� ����
}List;

//��� �߰� - ������ �߰�
void AddNode(List* list,int value);
//��� �˻� - ������ �˻�
Node* SearchNode(List* list, int value);
//��� ���� - ������ ����
void UpdateNode(List* list, int search, int update);
//��� ���� - ������ ����
void DeleteNode(List* list, int value);
//��ü ��� ��� - ��ü ������ ���
void PrintAllNode(List* list);
//��� ���� ����
int NodeCount(List* list);
#endif
