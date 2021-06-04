#include <iostream>
using namespace std;

class Number {
private:
    static int count;
public:
    Number() {
        count++;
        cout << count << "번째 생성" << endl;
    }

};
//static으로 선언된 멤버 변수는 반드시 외부에서 초기화 시켜줘야됨
int Number::count = 0;
int main(void) {
    Number n1,n2,n3;
    return 0;
}