#include <stdio.h>
int main(void) {
	//������ �迭 5�� ¥�� ����
	int arr[5] = { 0 };
	//������ �迭�� ���ڸ� ���� �Է�
	int i, total, max, min;
	for (i = 0; i < 5; i++) {
		printf("���� �Է� : ");
		scanf_s("%d", &arr[i]);
	}
	//������ ���� �Ϸ�
	//---------------------------------------
	//�迭�� �ִ� ��� ���� ���� ���� ����� ���
	//�迭�� �ִ� ���� �� ���� ū ���� ���
	//�迭�� �ִ� ���� �� ���� ���� ���� ���
	total = max = min = arr[0];
	for (i = 1; i < 5; i++) {
		total += arr[i];
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}
	printf("���� : %d\n", total);
	printf("�ִ밪 : %d\n", max);
	printf("�ּҰ� : %d\n", min);
	return 0;
}