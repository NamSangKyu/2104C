#include <stdio.h>

int main(void) {

	int num = 20;
	int *ptr = &num;
	//&num : num의 주소값, ptr : 포인터 변수가 저장하고 있는 주소값
	printf("%d %d\n", &num, ptr);
	//*ptr --> 현재 주소값에 위치한 변수 --> num 이 됨
	printf("%d %d\n", num, *ptr);

	num++;
	*ptr += 1;//num += 1; 과 동일함

	printf("%d %d\n", num, *ptr);

	return 0;
}