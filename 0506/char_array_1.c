#include<stdio.h>
int main() {
	char str[] = "Hello World";
	int i;
	//���ڿ� ���������� �ι���(�����ڵ尪 0)
	printf("%d\n", sizeof(str));
	//���ڿ� ���
	printf("%s\n", str);
	printf("%d\n", str); //�迭 �̸��� ������ �迭�� ù��° �޸� �ּҰ�

	for (i = 0; i < sizeof(str); i++) {
		printf("%c %d %d\n", str[i], str[i], &str[i]);
	}


	return 0;
}