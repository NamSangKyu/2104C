#include <iostream>
using namespace std;
bool checkPrimeNumber(int n) {
    if (n < 2) return false;

    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}
int main(void) {
    bool flag = true;
    cout << flag << " " << true << endl;
    flag = false;
    cout << flag << " " << false << endl;
    cout << sizeof(bool) << " " << sizeof(true) << " " << sizeof(10 > 5) << endl;
    for (int i = 1; i < 100; i++) {
        if (checkPrimeNumber(i))
            cout << i << " ";
    }
    return 0;
}