#include <stdio.h>
/*
	����ü �ʱ�ȭ�ϴ� ����
	����ü�� �����̱� ������ �����ϸ鼭 �ʱ�ȭ
*/
//���� ������ ������ ����ü
//���� ���� : ��ǥ��, ��������
/*
struct Position {
	int xpos;
	int ypos;
};
struct Circle {
	struct Position pos;
	int r;
};
*/
struct Circle {
	int xpos;
	int ypos;
	int r;
};
int main(void) {
	//					xpos,ypos,r �� ������� �����Ͱ� ����
	struct Circle cir = {3,4,6};
	//����ü ���� ����� �������� ������� �Ҵ�
	printf("xpos address : %d\n", &cir.xpos);
	printf("ypos address : %d\n", &cir.ypos);
	printf("r address : %d\n", &cir.r);
	printf("xpos : %d\n", cir.xpos);
	printf("ypos : %d\n", cir.ypos);
	printf("r : %d\n", cir.r);
	return 0;
}
