#include <stdio.h>

int main(void) {

	int num = 20;
	int *ptr = &num;
	//&num : num�� �ּҰ�, ptr : ������ ������ �����ϰ� �ִ� �ּҰ�
	printf("%d %d\n", &num, ptr);
	//*ptr --> ���� �ּҰ��� ��ġ�� ���� --> num �� ��
	printf("%d %d\n", num, *ptr);

	num++;
	*ptr += 1;//num += 1; �� ������

	printf("%d %d\n", num, *ptr);

	return 0;
}