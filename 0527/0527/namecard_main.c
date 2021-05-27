#include <stdio.h>
#include "list.h"

int main(void) {
    List list = {NULL,0};

    AddNode(&list);
    AddNode(&list);
    AddNode(&list);
    PrintAllNode(&list);
    return 0;
}