//编写一段程序，输入一个整数值，显示出它的绝对值。

#include <stdio.h>
int main(void)
{
    int a;
    printf("请输入一个整数：");
    scanf("%d",&a);
    if(a>=0)
    {
        printf("该数的绝对值是：%d\n",a);
    }
    else if(a<0)
    {
        printf("该数的绝对值是：%d\n",-a);
    }
    return 0;
}