//编写一段程序，像下面这样显示读取到的两个整数的乘积。

#include <stdio.h>
int main(void)
{
    int a,b,c;
    puts("请输入两个整数。");
    printf("整数1:");
    scanf("%d",&a);
    printf("整数2:");
    scanf("%d",&b);
    c=a*b;
    printf("它们的乘积是%d\n",c);
    return 0;
}