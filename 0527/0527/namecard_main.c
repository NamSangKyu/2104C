#include <stdio.h>
#include "list.h"

int main(void) {
    List list = {NULL,0};
    TestDataSet(&list);
    int no;
    while (1) {
        printf("명함관리 프로그램\n");
        printf("1. 명함 추가\n");
        printf("2. 명함 검색\n");
        printf("3. 명함 수정\n");
        printf("4. 명함 삭제\n");
        printf("5. 전체 명함 출력\n");
        printf("0. 프로그램 종료\n");
        printf("원하시는 번호를 입력하세요 : ");
        scanf_s("%d", &no);
        switch (no) {
        case 1:
            AddNode(&list);
            break;
        case 2:
            SearchNode(&list);
            break;
        case 3:
            UpdateNode(&list);
            break;
        case 4:
            DeleteNode(&list);
            break;
        case 5:
            PrintAllNode(&list);
            break;
        case 0:
            printf("프로그램 종료\n");
            return 0;
        }
    }



    return 0;
}