#include <stdio.h>
/*
	숫자 0을 입력할때까지 입력을 받아서
	0을 입력을 하면 입력한 숫자들의 총합 출력
	단 음수는 더하는 대상에서 제외
	숫자 입력 : 1
	숫자 입력 : 2
	숫자 입력 : 3
	숫자 입력 : 4
	숫자 입력 : 5
	숫자 입력 : -5
	숫자 입력 : -10
	숫자 입력 : 0
	입력하신 숫자들의 총합 : 15
*/
int main(void) {
	int n, total;
	total = 0;
	n = -1;

	while (n != 0) {
		n = -1;
		while (n < 0) {
			printf("숫자 입력 : ");
			scanf_s("%d", &n);
		}
		total += n; //total = total + n;
	}
	printf("입력하신 숫자들의 총합 : %d\n", total);

	return 0;


}