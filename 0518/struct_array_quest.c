#include <stdio.h>
//������� ������ ����ü �ۼ�
//��� - ���ڿ�, �̸� - ���ڿ�, ���� - ����, �μ� - ����
typedef struct employee {
    char no[10];
    char name[30];
    int position;
    int department;
} Employee;

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

}
int main(void) {
    AddEmployee();
    AddEmployee();

    return 0;
}