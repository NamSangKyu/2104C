#include <stdio.h>
#include <stdlib.h>
typedef struct position {
    int xpos;
    int ypos;
    struct position *ptr;
}Position;

Position * CreatePosition() {
    Position *p = (Position *)malloc(sizeof(Position));
    static int xpos=1, ypos=1;
    p->xpos = xpos++;
    p->ypos = ypos++;
    p->ptr = NULL;
    return p;
}

int main(void) {
    Position *start;
    start = CreatePosition();
    start->ptr = CreatePosition();
    start->ptr->ptr = CreatePosition();
    printf("%d %d\n", start->xpos, start->ypos);
    start = start->ptr;
    printf("%d %d\n", start->xpos, start->ypos);
    start = start->ptr;
    printf("%d %d\n", start->xpos, start->ypos);
    return 0;
}
