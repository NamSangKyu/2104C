#include <stdio.h>
//Call By Value는 매개변수가 값을 복사 받음
//호출하는 함수의 변수와는 서로 별개의 존재라서 영향을 서로 미치지 못함
void SwapNumberVal(int a, int b) {
	//a와 b를 바꾸는 코드
	int temp = a;
	a = b;
	b = temp;
}
//Call By Reference : 매개변수가 포인터 형태인 함수
//	매개변수가 포인터이기때문에 무조건 주소값 받음
//  해당하는 원본인 변수에 직접적인 접근이 가능
void SwapNumberRef(int* p1, int* p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
int main(void) {
	int n1 = 10, n2 = 20;

	printf("n1 : %d, n2 : %d\n", n1, n2);
	SwapNumberVal(n1, n2);//n1과 n2가 바뀌는가? - X
	printf("n1 : %d, n2 : %d\n", n1, n2);
	SwapNumberRef(&n1, &n2);//n1과 n2가 바뀌는가? - O
	printf("n1 : %d, n2 : %d\n", n1, n2);

	return 0;
}