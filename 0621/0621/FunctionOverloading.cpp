#include <iostream>
// �Լ� �����ε� : �Ȱ��� �Լ����� ���� �ְ� �ϴ� ����
//                �Լ����� ������ �Ű������� �������� �ּ� �ߺ������� ���
//1. �Ű����� ������ �ٸ��� ����
//2. �Ű������� ������ ���ٸ�? ---> ����Ÿ���� �ٸ��� ����
int sum(int a, int b) {
    return a + b;
}
//���� ����
char sum(char a, char b) {
    return a + b;
}
//�Ǽ� ����
double sum(double a, double b) {
    return a + b;
}
int sum(int a) {
    return a + 10;
}
int sum(int a, int b, int c) {
    return a + 10;
}
int main(void) {
    //std::cout << sum(10,20) << std::endl;//�Ű������� �ߺ��� �Ǳ⋚���� ����
    std::cout << sum('A',' ') << std::endl;
    std::cout << sum(3.1415,45.643) << std::endl;
    
    return 0;
}