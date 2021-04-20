#include <stdio.h>

int main() {
    int n1, n2;
    int result;
    n1 = n2 = 10;
    result = n1 < 5 && ++n2 < 20;
    printf("n2 : %d\n", n2);
    result = n1 > 5 || ++n2 < 20;
    printf("n2 : %d\n", n2);
    return 0;
}