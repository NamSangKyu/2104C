#include <stdio.h>

int main(void) {
	int num = 10;
	int* ptr = &num;

	printf("%d\n", ptr);//ptr�� �����ϰ� �ִ� �ּҰ�
	printf("%d\n", *ptr);//����Ű�� ��� --> num

	//ptr == &num
	//*ptr == num


	return 0;
}