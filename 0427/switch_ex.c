#include <stdio.h>

/*
	���ϸ� : switch_ex.c
	switch ����	
*/

int main(void) {
	int n;
	printf("1~5���� ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &n);

	/*
		switch�� ���ǽ� X, ������ �������� �̿��ؼ� ó��
	*/
	switch (n) {//switch ()���� ������ ���� ��
	case 1://if(n==1)
		printf("One\n");
		break;//switch���� ����
	case 2://else if(n==2)
		printf("Two\n");
		break;
	case 3:
		printf("Third\n");
		break;
	case 4:
		printf("four\n");
		break;
	case 5:
		printf("five\n");
		break;
	default://else ������ ȿ��
		printf("���ڸ� �߸� �Է��ϼ̽��ϴ�.\n");
	}
	return 0;
}