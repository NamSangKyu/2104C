#include <iostream>
using namespace std;
void pow(int &n) {
    n *= n;
    cout << &n << endl;
}
int main(void) {
    int num = 10;
    pow(num);
    cout << num << endl;
    cout << &num << endl;
    return 0;
}