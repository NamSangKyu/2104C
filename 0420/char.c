#include <stdio.h>
/*
	������ ������ Ÿ�� - char
	����ϴ� ���� ���ڿ� - %c

	char �޸𸮰� 1 byte ��ŭ �Ҵ� 
	1 byte ---> 2^8 ---> 256

	A ---> 65		a ---> 97
	Z ---> 90		z ---> 122
*/
int main(void) {
	char ch1 = 'A', ch2 = 'Z';

	printf("%d %c\n", ch1, ch1);
	printf("%d %c\n", ch2, ch2);
	printf("%c %c\n", 65, 90);
	return 0;
}