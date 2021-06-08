/*
���ϸ� : singletone
�� �� : �̱��� ���� ����
���α׷� ���ۺ��� ���������� ��ü �ϳ��� ������ Ȱ��
*/
#include <iostream>
using namespace std;
class Number {
private:
    static int count;
    //1. �ڱ��ڽ� Ÿ���� ����ų private static pointer
    static Number* instance;
    //2. private ������ : �ܺ� ������ ����
    Number() {
        cout << "Number()" << endl;
    }
public:
    //3. instance�� ���Ͻ�ų static �Լ� �ʿ�
    static Number& GetInstance() {
    //��ü�� ���࿡ ������ �ѹ��� ����
        if (instance == NULL)
            instance = new Number();
        return *instance;
    }
    void PrintCount() {
        cout << "���� Count �� : " << count << endl;
    }
};
int Number::count = 0;
Number* Number::instance = NULL;

int main(void) {
    Number &n = Number::GetInstance();
    n.PrintCount();
    Number::GetInstance().PrintCount();
    return 0;
}