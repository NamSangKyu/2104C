#include <stdio.h>
#include "list.h"

int main(void) {
    List list = {NULL,0};
    TestDataSet(&list);
    PrintAllNode(&list);
    return 0;
}