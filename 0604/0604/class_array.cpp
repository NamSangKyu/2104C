#include <iostream>
#include <cstring>
using namespace std;

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
    //Employee() {}
    Employee(const char *e, const char *n, int p, int s) : position(p), salary(s) {
        eno = new char[strlen(e) + 1];
        strcpy_s(eno, strlen(e) + 1, e);
        name = new char[strlen(n) + 1];
        strcpy_s(name, strlen(n) + 1, n);
    }
    Employee(const Employee &obj) {
        cout << "Copy Constructor" << endl;
        eno = new char[strlen(obj.eno) + 1];
        strcpy_s(eno, strlen(obj.eno) + 1, obj.eno);
        name = new char[strlen(obj.name) + 1];
        strcpy_s(name, strlen(obj.name) + 1, obj.name);
        position = obj.position;
        salary = obj.salary;
    }
    ~Employee() {
        delete[] eno;
        delete[] name;
    }
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
    //Employee �迭 10�� ¥�� ����
    //Employee arr[10]; //�⺻�����ڰ� �ʼ��� �ʿ�
    Employee *ptr[10];
    int idx = 0;
    ptr[idx++] = new Employee("1111", "ȫ�浿", MANAGER, 4500);
    ptr[idx - 1]->PrintEmployeeInfo();
    ptr[idx++] = new Employee("1112", "��ö��", GENEARL_MANAGER, 7500);
    ptr[idx - 1]->PrintEmployeeInfo();
    return 0;
}








