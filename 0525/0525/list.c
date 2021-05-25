#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void AddNode(List* list, int value) {
    //받아온 데이터를 가지고 노드생성 - 동적할당 --> 생성한 노드가 제일 마지막 값
    Node *node = (Node *)malloc(sizeof(Node));
    node->val = value;
    node->next = NULL;
    //리스트에서 마지막 노드를 찾음 - 마지막 노드는 next 포인터가 NULL
    Node *temp = list->header; //리스트 첫번째 노드를 읽어옴(첫번째 노드를 헤더)
    if (temp == NULL) {
        list->header = node;
        return;//첫번째 노드 저장 후 함수 종료
    }
    //두번째 노드부터 저장하는 부분
    //마지막 노드까지 이동
    while(temp->next != NULL)
        temp = temp->next;
    //마지막 노드 next에 새로 만든 노드의 주소값을 저장
    temp->next = node;
    list->count++;//저장하고 있는 노드 개수 증가

}