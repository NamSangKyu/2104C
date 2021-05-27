#pragma once
#ifndef __LIST_H__
#define __LIST_H__
typedef struct namecard {
    char name[21];
    char tel[12];
    char company[21];
    char position[13];
}NameCard;
//���� �Ѱ��� �����͸� ��Ÿ��
typedef struct node {
    NameCard val;//��
    struct node  * next; // ���� ��� ���� - ������ ���� ���� ��尡 ���� ������ NULL
}Node;

typedef struct list {
    Node* header;//ù��° ��� - ó������ �����Ͱ� ���� �����̱� ������ NULL�� �ʱ�ȭ
    int count;//���� ����Ʈ�� ����� ���� ����
}List;

//��� �߰� - ������ �߰�
void AddNode(List* list);
//��� �˻� - ������ �˻�
Node* SearchNode(List* list);
//��� ���� - ������ ����
void UpdateNode(List* list);
//��� ���� - ������ ����
void DeleteNode(List* list);
//��ü ��� ��� - ��ü ������ ���
void PrintAllNode(List* list);
//��� ���� ����
int NodeCount(List* list);
//�׽�Ʈ�� ������ ����
void TestDataSet(List* list);

#endif
