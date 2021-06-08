#include <iostream>
using namespace std;
/*
    OOP 2�ܰ� - ���(Inheritance)
        �θ� Ŭ������ �ڽ�Ŭ������ ������ ������ �ִ� ������ �Լ��� ������
        �ڽ� Ŭ������ �θ� �� ������ �Լ��� �ٷ� ����� ����
*/
class Animal {
protected: //Animal�� ��ӹ޴� �ڽ� Ŭ�������� ������ ���� 
    int age;
public:
    //�θ� Ŭ���� �����ڰ� ���� �ʿ���ϴ� ��쿡��
    //�ڽ� Ŭ������ �����ڿ��� �޾Ƽ� �θ� �����ڷ� ����
    Animal(int a) {   
        age = a;
        cout << "Animal Constructor" << endl;
    }
    void eat() {
        cout << "������ ���̸� �Խ��ϴ�." << endl;
    }
};
//��� ����---> class �ڽ�Ŭ������ : public �θ� Ŭ������
class Person : public Animal{
public:
    //�ڽ� Ŭ���� �����ڿ��� �̴ϼȶ������� �θ� �����ڸ� ȣ��
    Person(int a):Animal(a){
        cout << "Person Constructor" << endl;
    }
    void speak() {
        cout << "���̰� " << age << "�� ����� ���� �մϴ�" << endl;
    }
};
int main(void) {
    Person p(30);
    p.eat();
    p.speak();
    return 0;
}