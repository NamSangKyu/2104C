#include <stdio.h>

int main(void) {
	int i;
	//��ü �ƽ�Ű �ڵ尪 ���
	for (i = 0; i < 128; i++) {
		printf("%d %c\n", i, i);
	}

	return 0;

}