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
    int i;
    for (i = 0; i < 3; i++) {
        printf("x : %d, y : %d\n", arr[i].xpos, arr[i].ypos);
    }

    for (i = 0; i < 3; i++) {
        printf("좌표값 x y를 입력하세요 : ");
        scanf_s("%d %d", &arr[i].xpos, &arr[i].ypos);
    }
    for (i = 0; i < 3; i++) {
        printf("x : %d, y : %d\n", arr[i].xpos, arr[i].ypos);
    }

    return 0;
}