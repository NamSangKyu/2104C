#include <iostream>

using namespace std;

struct Person {
    char name[30];
    char tel[15];
};
Person * createPerson1() {
    //Person �ϳ� �����ؼ�
    Person *p = new Person;
    //�����͸� �Է� �޾Ƽ� ���� �� �ش� Person�� ����
    cout << "�̸� : "; cin >> p->name;
    cout << "����ó : "; cin >> p->tel;
    return p;
}
Person& createPerson2() {
    //Person �ϳ� �����ؼ�
    Person *p = new Person;
    //�����͸� �Է� �޾Ƽ� ���� �� �ش� Person�� ����
    cout << "�̸� : "; cin >> p->name;
    cout << "����ó : "; cin >> p->tel;
    return *p;
}

int main(void) {
    Person &person = *createPerson1();
    cout << person.name << " " << person.tel << endl;
    Person &ref = createPerson2();
    cout << ref.name << " " << ref.tel << endl;
    return 0;
}