#include <iostream>

int main(void) {
    char str[50];

    std::cout << "이름 : ";
    std::cin >> str;

    int age;

    std::cout << "나이 : ";
    std::cin >> age;

    std::cout << str << " " << age << std::endl;

    return 0;
}