#include <stdio.h>
#include <stdlib.h>

char * inputString() {
	//char str[50];//���� �����̱� ������ �Լ��� ������ �ش� �迭�� �����
	char *str = (char *)malloc(sizeof(char) * 50);//�����Ҵ��� Heap �޸𸮸� ���⶧���� �Լ��� ������ �޸𸮴� �������� ����, free�� �ؾ� ����

	printf("���ڿ� �Է� : ");
	scanf_s("%s", str,50);
	//scanf("%s", str);
	return str;
}

int main(int argc, char* argv[]) {
	char *str = inputString();
	printf("%s\n", str);
	return 0;
}