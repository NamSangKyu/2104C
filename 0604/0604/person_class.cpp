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


    void init(const char* n, int a) {
        strcpy_s(name, sizeof(name), n);
        age = a;
    }
    //����Լ�
    void PrintPersonInfo() {
        cout << "�̸� : " << name << endl;
        cout << "���� : " << age << endl;
    }

};
int main(void) {
    Person p;
    p.init("ȫ�浿", 20);
    p.PrintPersonInfo();

    return 0;
}