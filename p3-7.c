//编写一段程序，计算出输入的四个整数中的最大值并显示。※注意使用if语句。

#include <stdio.h>
int main(void)
{
    int a,b,c,d;
    puts("请输入四个整数。");
    printf("整数A：");
    scanf("%d",&a);
    printf("整数B：");
    scanf("%d",&b);
    printf("整数C：");
    scanf("%d",&c);
    printf("整数D：");
    scanf("%d",&d);
    int max=a;
    if(b>max)
    {
        max=b;
    }
    if(c>max)
    {
        max=c;
    }
    if(d>max)
    {
        max=d;
    }
    printf("最大的数是：%d\n",max);
    return 0;
}