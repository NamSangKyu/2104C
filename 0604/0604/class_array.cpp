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
            return "사원";
        case SENIOR:
            return "주임";
        case ASSISTANT:
            return "대리";
        case MANAGER:
            return "과장";
        case DEPUTY_GENEARL_MANAGER:
            return "차장";
        case GENEARL_MANAGER:
            return "부장";
        default:
            return "임시";
        }
    }

    void PrintEmployeeInfo() {
        cout << "사번 : " << eno << endl;
        cout << "이름 : " << name << endl;
        cout << "직급 : " << GetPositionName() << endl;
        cout << "연봉 : " << salary << endl;
    }
};
int main(void) {
    //Employee 배열 10개 짜리 선언
    //Employee arr[10]; //기본생성자가 필수로 필요
    Employee *ptr[10];
    int idx = 0;
    ptr[idx++] = new Employee("1111", "홍길동", MANAGER, 4500);
    ptr[idx - 1]->PrintEmployeeInfo();
    ptr[idx++] = new Employee("1112", "김철수", GENEARL_MANAGER, 7500);
    ptr[idx - 1]->PrintEmployeeInfo();
    return 0;
}








