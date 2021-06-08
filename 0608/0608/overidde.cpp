#include <iostream>
using namespace std;
//�� Ŭ����
//  �������
//          �Ѿ�
//  ����Լ�
//          �����ڿ��� �Ѿ� �޾Ƽ� �ʱ�ȭ
//          �߻� ---> �߻� �ѹ� ȣ���ҋ����� �Ѿ��� �ϳ��� �Һ�
//                    ���࿡ �Ѿ��� ������ Reload Reload ��ġ��
class Gun {
protected:
    int bullet;
public:
    Gun(int b) : bullet(b) {}
    void shot() {
        if (bullet > 0) {
            bullet--;
            cout << "BBang!" << endl;
        }
        else {
            cout << "Reload Reload!" << endl;
        }
    }
};
//K2 Ŭ���� - �θ�Ŭ������ Gun
//      �������
//            �ѱ�߻� ���
//      ����Լ�
//         �߻� 
//           �ܹ� - �ѹ߾� �߻�
//           ���� - 3�߾� �߻�
class K2 : public Gun {
private :
    bool mode;
public:
    K2(int b) : Gun(b){}
    void changeMode() {
        mode = !mode;
    }
    //�������̵� : �θ� ������ �ִ� �Լ��� �籸�� 
    void shot() {
        if (mode) {
            cout << "���� �߻��� ����" << endl;
            Gun::shot();//�θ�Ŭ������ ������ �ִ� shot
            Gun::shot();
            Gun::shot();
        }
        else {
            cout << "���� �߻��� �ܹ�" << endl;
            Gun::shot();
        }
    }
};
int main(void) {
    Gun g(24);
    for (int i = 0; i < 30; i++)
        g.shot();
    K2 k(25);
    k.changeMode();
    for (int i = 0; i < 5; i++)
        k.shot(); //K2 Ŭ������ ������ �ִ� shot�� ȣ��
    k.changeMode();
    for (int i = 0; i < 5; i++)
        k.shot();
    return 0;
}