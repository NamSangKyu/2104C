#include <stdio.h>
/*
	 ����ü�� ���Ǽ����� Ư�� ����� �ڵ�� ǥ���� ������
	 ������ ���ΰ͸� ǥ���� �� ������ ����ü

	 ��ǥ�� �����ϴ� ����ü
*/
//��ǥ�� �����ϴ� ����ü �ۼ� ---> ���� Ÿ���� �ȴ�.
struct Position {
	int xpos;
	int ypos;
};
int main(void) {
	//��ǥ�� �����ϴ� ����ü�� ����
	struct Position pos;
	struct Position nPos;
	pos.xpos = 10;
	pos.ypos = 20;

	printf("x : %d, y : %d\n", pos.xpos, pos.ypos);

	printf("x ��ǥ �Է� : ");
	scanf_s("%d", &nPos.xpos);
	printf("y ��ǥ �Է� : ");
	scanf_s("%d", &nPos.ypos);
	printf("x : %d, y : %d\n", nPos.xpos, nPos.ypos);
	return 0;
}