#include <iostream>

int main(void) {
    char str[50];

    std::cout << "�̸� : ";
    std::cin >> str;

    int age;

    std::cout << "���� : ";
    std::cin >> age;

    std::cout << str << " " << age << std::endl;

    return 0;
}