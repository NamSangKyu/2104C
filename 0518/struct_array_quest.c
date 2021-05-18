#include <stdio.h>
#include <string.h>
//������� ������ ����ü �ۼ�
//��� - ���ڿ�, �̸� - ���ڿ�, ���� - ����, �μ� - ����
typedef struct employee {
    char no[10];
    char name[30];
    int position;
    int department;
} Employee;
char *position[] = {"���","����","�븮","����","����","����"};
char *department[] = {"�ѹ�","����","���","ȸ��"};
Employee arr[10];
int idx = 0;
//�迭 arr�� employee �Ѱ��� ������ �Է¹޾Ƽ� �迭�� �����ϴ� �Լ�
//�̶� �ʿ��� ������ �� �����ص� ����
//�Լ��� �����Ҷ����� �迭���ٰ� �ѰǾ� ����
void AddEmployee() {
    printf("��� ������ �߰��մϴ�......\n");
    //�Է�
    printf("��� �Է� : ");
    scanf_s("%s", arr[idx].no, sizeof(arr[idx].no));
    printf("�̸� �Է� : ");
    scanf_s("%s", arr[idx].name, sizeof(arr[idx].name));
    printf("���� �Է�(1 - ���, 2 - ����, 3 - �븮, 4 - ����, 5 - ����, 6 - ���� : ");
    scanf_s("%d", &arr[idx].position);
    printf("�μ� �Է�(1 - �ѹ�, 2 - ����, 3 - ���, 4 - ȸ�� : ");
    scanf_s("%d", &arr[idx].department);

    //�ε��� ���� ����
    idx++;
}
//�迭�� �ִ� �Էµ� ��� Employee�� ���
void PrintAllEmployee() {
    //idx ��ȣ �������� ����, ó������ ������ ������ ����
    int i;
    for (i = 0; i < idx; i++) {
        printf("%s %s %s %s\n", arr[i].no, arr[i].name,
            position[arr[i].position-1],department[arr[i].department-1]);
    }
    printf("\n");
}
//�˻� - ����� �Է� �޾Ƽ� �˻��� ����, �˻������ ������ �ش� ������ ���
//      �˻� ����� ������ '�˻� ����� �����ϴ�.' ���
void SearchEmployee() {
    char no[10];
    int i;
    printf("�˻��� ��� �Է� : ");
    scanf_s("%s", no, sizeof(no));

    for (i = 0; i < idx; i++) {
        if (strcmp(arr[i].no, no) == 0) {
            printf("%s %s %s %s\n", arr[i].no, arr[i].name,
                position[arr[i].position-1], department[arr[i].department-1]);
            return;//�Լ��� ������ ����
        }
    }
    printf("�˻� ����� �����ϴ�.\n");
}
//�����ȣ�� ��ȸ, ��������� ����
void UpdateEmployee() {

}
int main(void) {
    AddEmployee();
    AddEmployee();
    PrintAllEmployee();
    SearchEmployee();
    return 0;
}