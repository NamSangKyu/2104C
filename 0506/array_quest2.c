#include <stdio.h>

int main(void) {
	//������ �迭 10��¥�� ����, �迭�� ��� ��Ҹ� 0���� �ʱ�ȭ
	int arr[10] = { 0 };
	int start=0, end=9,i;
	//������ �迭�� ���ڸ� �Է�, 
	//¦���� ������ ��Һ��� ä��, Ȧ���� �� �� ��Һ��� ä��
	while(start <= end){
		int temp;
		printf("���� �Է� : ");
		scanf_s("%d", &temp);
		if (temp % 2) {
			arr[start++] = temp;//�迭�� ��� ������ start ����
		}
		else {
			arr[end--] = temp;
		}
	}
	
	//���� ä��� ���� �迭�� �ִ� ��� ��Ҹ� ������� ���
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);

	return 0;
}