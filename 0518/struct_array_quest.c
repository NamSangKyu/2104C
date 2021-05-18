#include <stdio.h>
#include <string.h>
//사원정보 저장할 구조체 작성
//사번 - 문자열, 이름 - 문자열, 직급 - 숫자, 부서 - 숫자
typedef struct employee {
    char no[10];
    char name[30];
    int position;
    int department;
} Employee;
char *position[] = {"사원","주임","대리","과장","부장","사장"};
char *department[] = {"총무","영업","기술","회계"};
Employee arr[10];
int idx = 0;
//배열 arr에 employee 한건의 내용을 입력받아서 배열에 저장하는 함수
//이때 필요한 변수는 더 선언해도 가능
//함수를 실행할때마다 배열에다가 한건씩 저장
void AddEmployee() {
    printf("사원 정보를 추가합니다......\n");
    //입력
    printf("사번 입력 : ");
    scanf_s("%s", arr[idx].no, sizeof(arr[idx].no));
    printf("이름 입력 : ");
    scanf_s("%s", arr[idx].name, sizeof(arr[idx].name));
    printf("직급 입력(1 - 사원, 2 - 주임, 3 - 대리, 4 - 과장, 5 - 부장, 6 - 사장 : ");
    scanf_s("%d", &arr[idx].position);
    printf("부서 입력(1 - 총무, 2 - 영업, 3 - 기술, 4 - 회계 : ");
    scanf_s("%d", &arr[idx].department);

    //인덱스 값을 증가
    idx++;
}
//배열에 있는 입력된 모든 Employee를 출력
void PrintAllEmployee() {
    //idx 번호 전까지만 접근, 처음부터 끝까지 접근이 가능
    int i;
    for (i = 0; i < idx; i++) {
        printf("%s %s %s %s\n", arr[i].no, arr[i].name,
            position[arr[i].position-1],department[arr[i].department-1]);
    }
    printf("\n");
}
//검색 - 사번을 입력 받아서 검색을 수행, 검색결과가 있으면 해당 내용을 출력
//      검색 결과가 없으면 '검색 결과가 없습니다.' 출력
void SearchEmployee() {
    char no[10];
    int i;
    printf("검색할 사번 입력 : ");
    scanf_s("%s", no, sizeof(no));

    for (i = 0; i < idx; i++) {
        if (strcmp(arr[i].no, no) == 0) {
            printf("%s %s %s %s\n", arr[i].no, arr[i].name,
                position[arr[i].position-1], department[arr[i].department-1]);
            return;//함수를 강제로 종료
        }
    }
    printf("검색 결과가 없습니다.\n");
}
//사원번호로 조회, 사원정보를 수정
void UpdateEmployee() {

}
int main(void) {
    AddEmployee();
    AddEmployee();
    PrintAllEmployee();
    SearchEmployee();
    return 0;
}