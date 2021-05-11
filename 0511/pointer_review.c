#include <stdio.h>

int main(void) {
	int num = 10;
	int* ptr = &num;

	printf("%d\n", ptr);//ptr이 저장하고 있는 주소값
	printf("%d\n", *ptr);//가리키는 대상 --> num

	//ptr == &num
	//*ptr == num


	return 0;
}