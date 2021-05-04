#include <stdio.h>
int main(void) {
	int n;
	float f;
	double d;
	char c;
	int arr1[4];
	double arr2[4];

	printf("int size - %d %d %d\n", 
		sizeof(n), sizeof(int), sizeof(10));
	printf("float size - %d %d %d\n",
		sizeof(f), sizeof(float), sizeof(3.1415f));
	printf("double size - %d %d %d\n",
		sizeof(d), sizeof(double), sizeof(3.1415));
	printf("char size - %d %d %d\n",
		sizeof(c), sizeof(char), sizeof('A'));
	printf("int array size - %d\n", sizeof(arr1));
	printf("double array size - %d\n", sizeof(arr2));

	return 0;
}