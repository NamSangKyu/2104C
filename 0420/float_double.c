#include <stdio.h>

int main(void) {
	float f1 = 234.532f;
	double d1 = 234.532;
	
	printf("f1 = %f\n", f1);
	printf("f1 = %g\n", f1);
	printf("d1 = %lf\n", d1);
	printf("d1 = %g\n", d1);
	printf("%d\n", f1 == d1);
	printf("%d\n", d1 == 234.532);
	return 0;
}