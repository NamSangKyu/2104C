#pragma once
#ifndef __LIST_H__
#define __LIST_H__
//노드는 한건의 데이터를 나타냄
typedef struct node {
    int val;//값
    struct node  * next; // 다음 노드 연결 - 마지막 노드는 다음 노드가 없기 때문에 NULL
}Node;

typedef struct list {
    Node* header;//첫번째 노드 - 처음에는 데이터가 없는 상태이기 떄문에 NULL로 초기화
    int count;//현재 리스트에 저장된 값의 개수
}List;

//노드 추가 - 데이터 추가
void AddNode(List* list,int value);
//노드 검색 - 데이터 검색
Node* SearchNode(List* list, int value);
//노드 수정 - 데이터 수정
void UpdateNode(List* list, int search, int update);
//노드 삭제 - 데이터 삭제
void DeleteNode(List* list, int value);
//전체 노드 출력 - 전체 데이터 출력
void PrintAllNode(List* list);
//노드 개수 리턴
int NodeCount(List* list);
#endif
