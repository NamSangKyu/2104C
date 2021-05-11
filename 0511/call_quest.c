#include <stdio.h>
int AbsVal(int n) {//Call by Value
	if (n < 0) n = -n;
	return n;
}
void AbsRef(int* ptr) {//Call by Reference
	if (*ptr < 0) *ptr = -*ptr;
}
int main(void) {
	int n;

	printf("숫자 입력 : ");
	scanf_s("%d", &n);

	printf("%d\n", AbsVal(n));
	AbsRef(&n);
	printf("%d\n", n);

	return 0;
}