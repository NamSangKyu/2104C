#include <iostream>
using namespace std;
/*
    OOP 2단계 - 상속(Inheritance)
        부모 클래스가 자식클래스에 본인이 가지고 있는 변수와 함수를 물려줌
        자식 클래스는 부모가 준 변수와 함수를 바로 사용이 가능
*/
class Animal {
protected: //Animal을 상속받는 자식 클래스까지 접근이 가능 
    int age;
public:
    //부모 클래스 생성자가 값을 필요로하는 경우에는
    //자식 클래스가 생성자에서 받아서 부모 생성자로 전달
    Animal(int a) {   
        age = a;
        cout << "Animal Constructor" << endl;
    }
    void eat() {
        cout << "동물이 먹이를 먹습니다." << endl;
    }
};
//상속 문법---> class 자식클래스명 : public 부모 클래스명
class Person : public Animal{
public:
    //자식 클래스 생성자에서 이니셜라이져로 부모 생성자를 호출
    Person(int a):Animal(a){
        cout << "Person Constructor" << endl;
    }
    void speak() {
        cout << "나이가 " << age << "인 사람이 말을 합니다" << endl;
    }
};
int main(void) {
    Person p(30);
    p.eat();
    p.speak();
    return 0;
}