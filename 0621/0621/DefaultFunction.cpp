#include <iostream>
//�Ű� ������ �⺻���� ����
int sum(int a=50, int b=100) {
    return a + b;
}
//���ڰ��� �Ű������� ���� �� ���ʺ��� ���� ������ 
//�⺻���� �� ������ �Ű��������� ���ʴ�� ����
int minus(int a, int b=100) {
    return a - b;
}
int main(void) {
    std::cout << sum(10, 20) << std::endl;
    std::cout << sum(10) << std::endl;
    std::cout << sum() << std::endl;
    std::cout << minus(30) << std::endl;

    return 0;
}