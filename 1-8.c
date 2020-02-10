/*
为两个变量赋整数值并显示
*/
#include <stdio.h>

int main(void) 
{
    int vx, vy;

    vx = 57; // ❶
    vy = vx + 10; // ❷

    printf("vx的值是%d。\n", vx);
    printf("vy的值是%d。\n", vy);

    return 0;
}