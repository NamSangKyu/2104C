#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void AddNode(List* list) {
    //받아온 데이터를 가지고 노드생성 - 동적할당 --> 생성한 노드가 제일 마지막 값
    Node *node = (Node *)malloc(sizeof(Node));
    
    printf("명함 정보 등록을 시작합니다.\n");
    printf("이름 : ");
    scanf_s("%s", node->val.name, sizeof(node->val.name));
    printf("연락처 : ");
    scanf_s("%s", node->val.tel, sizeof(node->val.tel));
    printf("회사명 : ");
    scanf_s("%s", node->val.company, sizeof(node->val.company));
    printf("직급 : ");
    scanf_s("%s", node->val.position, sizeof(node->val.position));

    node->next = NULL;
    //리스트에서 마지막 노드를 찾음 - 마지막 노드는 next 포인터가 NULL
    Node *temp = list->header; //리스트 첫번째 노드를 읽어옴(첫번째 노드를 헤더)
    if (temp == NULL) {
        list->header = node;
        list->count++;
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
void PrintAllNode(List* list) {
    //맨처음 노드부터 마지막 노드까지 이동하면서 val을 출력
    Node *temp = list->header;
    printf("현재 노드 개수 : %d\n", list->count); 
    while (temp != NULL) {
        //현재 노드에 있는 NameCard 정보를 출력
        printf("%20s %12s %20s %12s\n", temp->val.name,
            temp->val.tel, temp->val.company, temp->val.position);

        temp = temp->next;//다음노드 이동
    }
    printf("NULL\n");

}
/*
Node* SearchNode(List* list, int value) {
    //맨처음 노드부터 마지막 노드까지 이동
    Node *temp = list->header;
    while (temp != NULL) {
        if (temp->val == value) {
            printf("검색한 %d값이 있습니다.\n", temp->val);
            return temp;
        }
        temp = temp->next;//다음노드 이동
    }
    printf("검색한 값이 없습니다.\n");
    return NULL;
}
void UpdateNode(List* list, int search, int update) {
    //search로 검색
    Node* node = SearchNode(list, search);
    if (node == NULL) return; //결과가 없으면 NULL이기 때문에 함수를 강제 종료
    //검색한 결과에 따라서 결과가 있으면 update로 값을 변경
    node->val = update;
    printf("수정 작업 완료 되었습니다.\n");
}

int NodeCount(List* list) {
    return list->count;
}
void DeleteNode(List* list, int value) {
    //삭제할 노드를 검색하면서 이전 노드 정보도 보관
    Node *temp = list->header;
    //삭제할 이전 노드를 관리할 포인터
    Node *back = NULL;
    while (temp != NULL) {
        if (temp->val == value) {
            //삭제 작업을 수행
            //이전노드의 next 포인터를 현재 노드의 next 포인터를 저장해서 
            //이전노드가 현재 노드의 다음노드로 이동할수 있게끔 연결
            if (back == NULL)
                list->header = temp->next;
            else
                back->next = temp->next;
            free(temp);//완전히 삭제
            list->count--;
            break;
        }
        back = temp;//이전노드에 현재 노드를 저장
        temp = temp->next;//다음노드로 이동
    }
}
*/



