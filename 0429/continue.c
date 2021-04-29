#include <stdio.h>

int main(void) {

	int n = 4351;
	int num;
	while (n > 0) {
		//숫자하나 입력 받아서 
		//입력받은 숫자를 n에다가 나누는 작업
		//나눌때마다 몫을 n에 다시 저장
		//0으로는 나눌수가 없어서 0이 입력되면 바로 다음 반복으로 넘어감
		printf("숫자 입력(정수만) : ");
		scanf_s("%d", &num);
		if (num == 0)
			continue;
		n /= num;
		printf("%d로 나눈 결과 : %d\n", num, n);

	}


	return 0;
}