#include <stdio.h>
typedef struct position {
    int xpos;
    int ypos;
}Position;

int main(void) {
    Position arr[3] = {
       {5,7}, //0��° Position
       {10,20}, //1��° Position
       {44,55}, //2��° Position
    };

    Position * ptr = arr;
    //1��° ���� ���
    printf("%d %d\n", ptr->xpos, ptr->ypos); ptr++;
    printf("%d %d\n", ptr->xpos, ptr->ypos); ptr++;
    printf("%d %d\n", ptr->xpos, ptr->ypos);
     
    ptr = arr;
    //2��° ���� ���
    printf("%d %d\n", (*ptr).xpos, (*ptr).ypos); ptr++;
    printf("%d %d\n", (*ptr).xpos, (*ptr).ypos); ptr++;
    printf("%d %d\n", (*ptr).xpos, (*ptr).ypos); 
    return 0;
}