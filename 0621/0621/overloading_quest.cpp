#include <iostream>
using namespace std;
void Swap(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
void Swap(double *p1, double *p2) {
    double temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
void Swap(char *p1, char *p2) {
    char temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main(void) {
    //두변수의 내용을 바꾸는 함수
    int n1=10, n2=20;
    double d1=3.1415, d2=23.123;
    char c1='A', c2='B';

    Swap(&n1, &n2);
    Swap(&d1, &d2);
    Swap(&c1, &c2);
    
    cout << n1 << " " << n2 << endl;
    cout << d1 << " " << d2 << endl;
    cout << c1 << " " << c2 << endl;

    return 0;
}