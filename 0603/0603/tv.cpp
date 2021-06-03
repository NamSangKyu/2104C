#include <iostream>
using namespace std;
/*
    TV
        ä�� - int - 1~777
        ���� - int - 0~30
        ���� - bool - true ���� ����, false ���� ����

        ä��UP
        ä��DOWN
        ����UP
        ����DOWN
        ����OnOff
*/
struct TV {
    int ch;
    int vol;
    bool power;

    void chUp() {
        ch++;
        if (ch > 777) ch = 1;//������ ä�κ��� ũ�� ��ó�� ä�η� �̵�
        cout << "���� ä�� : " << ch << endl;
    }
    void chDown() {
        ch--;
        if (ch < 1) ch = 777;//ó�� ä�κ��� ������ ������ ä�η� �̵�
        cout << "���� ä�� : " << ch << endl;
    }
    void volUp() {
        if (vol < 30) vol++;
        cout << "���� ���� : " << vol << endl;
    }
    void volDown() {
        if (vol > 0) vol--;
        cout << "���� ���� : " << vol << endl;
    }
    void powerOnOff() {
        power = !power;
        if (power)
            cout << "TV ���� On" << endl;
        else
            cout << "TV ���� Off" << endl;
    }
};
int main(void) {
    TV tv = { 21,10,false };
    tv.powerOnOff();
    tv.powerOnOff();
    for(int i=0;i<30;i++)
        tv.chDown();
    for (int i = 0; i < 30; i++)
        tv.chUp();
    for (int i = 0; i < 30; i++)
        tv.volUp();
    for (int i = 0; i < 40; i++)
        tv.volDown();
    return 0;
}