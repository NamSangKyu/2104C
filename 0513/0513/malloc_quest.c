/*
	���ϸ� : malloc_quest.c

	���ʿ� �����Ҵ����� �迭�� 5���� �ش��ϴ� �޸𸮸� �Ҵ�
	�Ҵ� ���� �޸𸮿� ���ڸ� �Է� ������, ���� 0�� �Է��ҋ����� ��� �Է�
	�Է� ������ ��� �迭�� ������ �Է��ϸ�,
	�ź� �迭 ������ 3���� �÷������鼭 �Է� ����,
	0�� �Է��ϴ� ���� �Է��� ������ ���� ���Ͽ� ���
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int *arr;
	int size=5, i=0, sum=0;

	//�����Ҵ�
	arr = (int *)malloc(sizeof(int) * size);

	//���ѷ���
	while (1) {
		printf("���� �Է� : ");
		scanf_s("%d", &arr[i]);
		if (arr[i] == 0) break;
		i++;
		if (i == size) {//�迭�� ���� ���
			size += 3;
			arr = (int *)realloc(arr, sizeof(int)*size);
		}
	}
	i = 0;
	while (arr[i] != 0) {
		sum += arr[i++];
	}
	printf("�Է��Ͻ� ���ڵ��� ���� : %d\n", sum);
	free(arr);
	//���� �� ���� ���
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);

	return 0;
}
