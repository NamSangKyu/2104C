#include <iostream>
#define add(a,b) a+b
//���� �ΰ��� �޾Ƽ� �μ��� ���� �����ϴ� �Լ�
//inline�� �����Ϸ��� �˾Ƽ� �ٿ���. ��ũ�� �Լ��� ������ ȿ��
inline int sum(int n1, int n2) {
    return n1 + n2;
}
int main(void) {
    std::cout << sum(10, 20) << std::endl;
    std::cout << add(10, 20) << std::endl;
    return 0;
}