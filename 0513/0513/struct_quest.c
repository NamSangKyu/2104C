#include <stdio.h>
//주소록 저장하는 구조체
//주소록에 저장된 내용
//이름, 연락처, 나이
struct Tel {
	char name[30];
	char tel[14];
	int age;
};
int main(void) {
	//해당 구조체 선언 후, 데이터 초기화해서 출력
	struct Tel t1 = {"홍길동","010-1111-2222",20};
	//해당 구조체 선언 후, 데이터를 scanf_s로 입력해서 출력
	struct Tel t2;
	printf("이름 : ");
	scanf_s("%s", t2.name, sizeof(t2.name));
	printf("연락처 : ");
	scanf_s("%s", t2.tel, sizeof(t2.tel));
	printf("나이 : ");
	scanf_s("%d", &t2.age);

	printf("%s %s %d\n", t1.name, t1.tel, t1.age);
	printf("%s %s %d\n", t2.name, t2.tel, t2.age);

	return 0;
}