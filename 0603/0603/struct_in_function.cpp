#include <iostream>
using namespace std;
/*
    학생정보 하나 저장하는 구조체를 작성
        학번 - 문자열, 이름 - 문자열, 학과 - 문자열, 평점 - double
*/
struct Student {
    char no[10];
    char name[20];
    char major[30];
    double score;

    //학생정보를 출력하는 함수를 작성
    void PrintStudent() {
        cout << no << " " << name << " "
            << major << " " << score << endl;
    }

    //학생정보 중 평점을 이용해서 성적등급을 리턴
    /*
        4.5 ==> A+
        4.0 ~ 4.4 ==> A
        3.5 ~ 3.9 ==> B+
        3.0 ~ 3.4 ==> B
        2.5 ~ 2.9 ==> C+
        2.0 ~ 2.4 ==> C
        1.5 ~ 1.9 ==> D+
        1.0 ~ 1.4 ==> D
        0.0 ~ 0.9 ==> F
    */
    const char * GetGrade() {
        int s = (int)(score / 0.5);
        switch (s) {
        case 9:
            return "A+";
        case 8:
            return "A";
        case 7:
            return "B+";
        case 6:
            return "B";
        case 5:
            return "C+";
        case 4:
            return "C";
        case 3:
            return "D+";
        case 2:
            return "D";
        default:
            return "F";
        }

    }



};

int main(void) {
    Student std = {"1234","홍길동","게임학과",4.14};
    //PrintStudent(std);
    std.PrintStudent();
    cout << std.GetGrade() << endl;
    return 0;
}