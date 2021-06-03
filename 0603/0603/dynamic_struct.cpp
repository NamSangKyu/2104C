#include <iostream>

using namespace std;

struct Person {
    char name[30];
    char tel[15];
};
Person * createPerson1() {
    //Person 하나 생성해서
    Person *p = new Person;
    //데이터를 입력 받아서 저장 후 해당 Person을 리턴
    cout << "이름 : "; cin >> p->name;
    cout << "연락처 : "; cin >> p->tel;
    return p;
}
Person& createPerson2() {
    //Person 하나 생성해서
    Person *p = new Person;
    //데이터를 입력 받아서 저장 후 해당 Person을 리턴
    cout << "이름 : "; cin >> p->name;
    cout << "연락처 : "; cin >> p->tel;
    return *p;
}

int main(void) {
    Person &person = *createPerson1();
    cout << person.name << " " << person.tel << endl;
    
    Person &ref = createPerson2();
    cout << ref.name << " " << ref.tel << endl;
    return 0;
}