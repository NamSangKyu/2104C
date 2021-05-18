#include <stdio.h>
typedef struct position {
    int xpos;
    int ypos;
}Position;

int main(void) {
    Position arr[3] = {
       {5,7}, //0번째 Position
       {10,20}, //1번째 Position
       {44,55}, //2번째 Position
    };

    Position * ptr = arr;
    //1번째 접근 방법
    printf("%d %d\n", ptr->xpos, ptr->ypos); ptr++;
    printf("%d %d\n", ptr->xpos, ptr->ypos); ptr++;
    printf("%d %d\n", ptr->xpos, ptr->ypos);
     
    ptr = arr;
    //2번째 접근 방법
    printf("%d %d\n", (*ptr).xpos, (*ptr).ypos); ptr++;
    printf("%d %d\n", (*ptr).xpos, (*ptr).ypos); ptr++;
    printf("%d %d\n", (*ptr).xpos, (*ptr).ypos); 
    return 0;
}