#include <stdio.h>
#include "list.h"

int main(void) {
    List list = {NULL,0};
    TestDataSet(&list);
    int no;
    while (1) {
        printf("���԰��� ���α׷�\n");
        printf("1. ���� �߰�\n");
        printf("2. ���� �˻�\n");
        printf("3. ���� ����\n");
        printf("4. ���� ����\n");
        printf("5. ��ü ���� ���\n");
        printf("0. ���α׷� ����\n");
        printf("���Ͻô� ��ȣ�� �Է��ϼ��� : ");
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
            printf("���α׷� ����\n");
            return 0;
        }
    }



    return 0;
}