//编写一段程序，读取两个整数，然后输出它们的和以及积。

#include <stdio.h>

int main(void)
{
    int a, b;

    puts("请输入两个整数。");
    printf("整数a："); scanf("%d", &a);
    printf("整数b："); scanf("%d", &b);
    printf("他们的和是%d积是%d。\n",a+b,a*b);
    return 0;
}