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
    int i;
    for (i = 0; i < 3; i++) {
        printf("x : %d, y : %d\n", arr[i].xpos, arr[i].ypos);
    }

    for (i = 0; i < 3; i++) {
        printf("��ǥ�� x y�� �Է��ϼ��� : ");
        scanf_s("%d %d", &arr[i].xpos, &arr[i].ypos);
    }
    for (i = 0; i < 3; i++) {
        printf("x : %d, y : %d\n", arr[i].xpos, arr[i].ypos);
    }

    return 0;
}