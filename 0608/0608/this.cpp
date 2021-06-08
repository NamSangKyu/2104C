#include <iostream>

using namespace std;

class Number {
private:
    int num;
public:
    Number(int num) {
        this->num = num;
    }
    void printNum() {
        cout << "ÀúÀåµÈ num : " << num << endl;
    }
    Number& getNum() {
        return *this;
    }
};

int main(void) {
    Number num(20);
    num.printNum();
    num.getNum().printNum();
    return 0;
}