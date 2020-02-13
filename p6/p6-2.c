/*---创建一个函数，返回三个int型整数中的最小值。---*/

#include <stdio.h>

int min3(int a, int b, int c)
{
    int min;

    min = a;

    if (b < min)
        min = b;
    if (c < min)
        min = c;

    return min;
}

int main(void)
{
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);
    printf("三个数中的最小值为：%d", min3(a, b, c));

    return 0;
}