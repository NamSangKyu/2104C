#include <stdio.h>
#include "list.h"

int main(void) {
    List list = { NULL, 0 };

    PrintAllNode(&list);
    AddNode(&list, 6);
    AddNode(&list, 2);
    AddNode(&list, 4);
    AddNode(&list, 1);
    AddNode(&list, 7);
    PrintAllNode(&list);


    return 0;
}