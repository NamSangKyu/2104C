#include <stdio.h>
//�ּҷ� �����ϴ� ����ü
//�ּҷϿ� ����� ����
//�̸�, ����ó, ����
struct Tel {
	char name[30];
	char tel[14];
	int age;
};
int main(void) {
	//�ش� ����ü ���� ��, ������ �ʱ�ȭ�ؼ� ���
	struct Tel t1 = {"ȫ�浿","010-1111-2222",20};
	//�ش� ����ü ���� ��, �����͸� scanf_s�� �Է��ؼ� ���
	struct Tel t2;
	printf("�̸� : ");
	scanf_s("%s", t2.name, sizeof(t2.name));
	printf("����ó : ");
	scanf_s("%s", t2.tel, sizeof(t2.tel));
	printf("���� : ");
	scanf_s("%d", &t2.age);

	printf("%s %s %d\n", t1.name, t1.tel, t1.age);
	printf("%s %s %d\n", t2.name, t2.tel, t2.age);

	return 0;
}