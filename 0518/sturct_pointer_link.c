#include <stdio.h>
typedef struct position {
    int xpos;
    int ypos;
    struct position *ptr;
}Position;

int main(void) {
    Position p1 = { 5,3 };
    Position p2 = { 7,9 };
    Position p3 = { 10,14 };
    p1.ptr = &p2;
    p2.ptr = &p3;
    p3.ptr = &p1;
    Position * p = &p1;
    printf("%d %d\n", p->xpos, p->ypos);
    p = p->ptr;
    printf("%d %d\n", p->xpos, p->ypos);
    p = p->ptr;
    printf("%d %d\n", p->xpos, p->ypos);
    p = p->ptr;
    printf("%d %d\n", p->xpos, p->ypos);
    return 0;
}