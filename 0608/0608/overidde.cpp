#include <iostream>
using namespace std;
//총 클래스
//  멤버변수
//          총알
//  멤버함수
//          생성자에서 총알 받아서 초기화
//          발사 ---> 발사 한번 호출할떄마다 총알을 하나씩 소비
//                    만약에 총알이 없으면 Reload Reload 외치기
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
//K2 클래스 - 부모클래스는 Gun
//      멤버변수
//            총기발사 모드
//      멤버함수
//         발사 
//           단발 - 한발씩 발사
//           점사 - 3발씩 발사
class K2 : public Gun {
private :
    bool mode;
public:
    K2(int b) : Gun(b){}
    void changeMode() {
        mode = !mode;
    }
    //오버라이딩 : 부모가 가지고 있는 함수를 재구현 
    void shot() {
        if (mode) {
            cout << "현재 발사모드 점사" << endl;
            Gun::shot();//부모클래스가 가지고 있는 shot
            Gun::shot();
            Gun::shot();
        }
        else {
            cout << "현재 발사모드 단발" << endl;
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
        k.shot(); //K2 클래스가 가지고 있는 shot을 호출
    k.changeMode();
    for (int i = 0; i < 5; i++)
        k.shot();
    return 0;
}