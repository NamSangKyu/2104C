#include <iostream>
#include <cstring>
using namespace std;
/*
    ���� ������
        private : Ŭ���� ���ο����� ������ ����, �ܺηκ��� ������ ����
        protected : ��ӹ��� Ŭ�������� ������ ����
        public : �ܺηκ��� ������ ���, �ش� �Լ��� ������ ����
*/
class Person {
private:
    //�������
    char name[30];
    int age;
public:
    //������ : Ŭ������ �̿��Ͽ� ���� ����� ���ϸ��� �� �ѹ� ����Ǵ� �Լ�
    //        Ŭ������ ������ �Ǿ����� ���ϸ��� �ؾߵǴ� �ϵ��� ó���ϴ� �Լ�
    Person(){//�⺻ ������(default constructor) : �����ڸ� �ۼ����� ������ �ڵ����� ���ԵǴ� ������
        cout << "Person Constructor" << endl;
        strcpy_s(name, sizeof(name), "��ö��");
        age = 33;
    }
    Person(const char* n, int a) {
        strcpy_s(name, sizeof(name), n);
        age = a;
    }

    //����Լ�
    void init(const char* n, int a) {
        strcpy_s(name, sizeof(name), n);
        age = a;
    }
    void PrintPersonInfo() {
        cout << "�̸� : " << name << endl;
        cout << "���� : " << age << endl;
    }

};
int main(void) {
    Person p;
    p.PrintPersonInfo();
    p.init("ȫ�浿", 20);
    p.PrintPersonInfo();

    Person p1("�̿���", 56);
    p1.PrintPersonInfo();

    return 0;
}