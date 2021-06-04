#include <iostream>
#include <cstring>
using namespace std;
/*
    접근 제어자
        private : 클래스 내부에서만 접근이 가능, 외부로부터 접근을 차단
        protected : 상속받은 클래스까지 접근이 가능
        public : 외부로부터 접근을 허용, 해당 함수나 변수를 공개
*/
class Person {
private:
    //멤버변수
    char name[30];
    int age;
public:
    //생성자 : 클래스를 이용하여 변수 선언시 제일먼저 딱 한번 실행되는 함수
    //        클래스가 생성이 되었을때 제일먼저 해야되는 일들을 처리하는 함수
    Person(){//기본 생성자(default constructor) : 생성자를 작성하지 않으면 자동으로 삽입되는 생성자
        cout << "Person Constructor" << endl;
        strcpy_s(name, sizeof(name), "김철수");
        age = 33;
    }
    Person(const char* n, int a) {
        cout << "Person Constructor(const char *, int)" << endl;
        strcpy_s(name, sizeof(name), n);
        age = a;
    }

    //멤버함수
    void init(const char* n, int a) {
        strcpy_s(name, sizeof(name), n);
        age = a;
    }
    void PrintPersonInfo() {
        cout << "이름 : " << name << endl;
        cout << "나이 : " << age << endl;
    }

};
int main(void) {
    Person p;
    p.PrintPersonInfo();
    p.init("홍길동", 20);
    p.PrintPersonInfo();

    Person p1("이영희", 56);//원하는 생성자 호출
    p1.PrintPersonInfo();

    return 0;
}