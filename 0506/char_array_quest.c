#include <stdio.h>
/*
	1. ���ڿ��� �Է� ���� �� �Է� ���� ���ڿ��� ���� ������ ���
	   ���� �������� �ι��ڴ� �����ϰ� ������ ���

	   ���ڿ� �Է� : Hello
	   ���ڿ� ���� : 5
*/
int main(void) {
	
	char str[100];
	int idx=-1;
	int len;
	printf("���ڿ� �Է� : ");
	scanf_s("%s", str, sizeof(str));
	//012345
	//Hello\0 --->�ι��ڰ� �ִ� �ε��� ��ȣ�� ���� ����
	while (str[++idx] != '\0');

	printf("���ڿ� ���� : %d\n", idx);
	len = idx;
	//�Է��� ���ڿ��� �ݴ�� ����� ���� �� ���
	for (idx = 0; idx < len / 2; idx++) {
		//idx    len-1-idx
		//0  --  4  <-- 5 - 1 - 0
		//1  --  3  <-- 5 - 1 - 1
		char temp = str[idx];
		str[idx] = str[len - 1 - idx];
		str[len - 1 - idx] = temp;
	}
	printf("%s\n", str);
	return 0;
}