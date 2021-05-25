#include <stdio.h>
#include "calc.h"
#include "calc.h"
#ifndef __CALC_H__
#define __CALC_H__
int max(int n1, int n2) {
    return n1 > n2 ? n1 : n2;
}
#endif
int main(void) {
    printf("max : %d \n", max(10, 20));
    return 0;
}