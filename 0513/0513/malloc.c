#include <stdio.h>
#include <stdlib.h>
//void * �� �޸� �ּҸ� �����ϴ� ������ ����
//void�� �����͸� ������ �� �ִ� �޸� ������ ����, ���� ���� X
//�����ʹ� �޸� �ּҰ��� ������ �� �ֱ� ������ ������ �ּҰ��� ��� �� �ְ�
//�������� ����� �Ҽ��� ����
int main(void) {
	//malloc�� �μ����� ������ ����� ���޵�
	int *arr = (int *)malloc(sizeof(int)*5);//20byte �Ҵ�
	int i;

	for (i = 0; i < 5; i++) {
		arr[i] = (i + 1) * 5;
		printf("%d ", arr[i]);
	}
	printf("\n");
	arr = (int *)realloc(arr,sizeof(int)*3);
	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
		//arr[i] = (i + 1) * 3;//�̹� �ݳ��� �޸𸮿� �����ؼ� ������ ���� �õ�
	}
	free(arr);
	return 0;
}