#include <iostream>
#include <cstring>
using namespace std;
/*
    ��� Ŭ����
        ������� : ��� - char *, �̸�- char *, ���� - int, ���� - int
        ����Լ�
            ������� ��� �ʱ�ȭ�� ������
            ������� ����ϴ� �Լ�

*/
enum {
    CLERK, SENIOR, ASSISTANT, MANAGER, DEPUTY_GENEARL_MANAGER, GENEARL_MANAGER
};
class Employee {
private:
    char * eno;
    char * name;
    int position;
    int salary;
public:
    Employee(char *e, char *n, int p, int s) : position(p),salary(s){
        eno = new char[strlen(e) + 1];
        strcpy_s(eno, strlen(e) + 1, e);
        name = new char[strlen(n) + 1];
        strcpy_s(name, strlen(n) + 1, n);
    }
    //�Ҹ���(Deconstructor)
    ~Employee() {
        delete[] eno;
        delete[] name;
    }
    //���޸� �����ϴ� �Լ�
    const char * GetPositionName() {
        switch (position) {
        case CLERK:
            return "���";
        case SENIOR:
            return "����";
        case ASSISTANT:
            return "�븮";
        case MANAGER:
            return "����";
        case DEPUTY_GENEARL_MANAGER:
            return "����";
        case GENEARL_MANAGER:
            return "����";
        default:
            return "�ӽ�";
        }
    }

    void PrintEmployeeInfo() {
        cout << "��� : " << eno << endl;
        cout << "�̸� : " << name << endl;
        cout << "���� : " << GetPositionName() << endl;
        cout << "���� : " << salary << endl;
    }
};
int main(void) {


    return 0;
}