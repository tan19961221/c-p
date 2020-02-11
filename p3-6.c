//编写一段程序，计算出输入的三个整数中的最小值并显示。※注意使用if语句

#include <stdio.h>
int main(void)
{
    int a,b,c;
    puts("请输入三个整数。");
    printf("整数A：");
    scanf("%d",&a);
    printf("整数B：");
    scanf("%d",&b);
    printf("整数C：");
    scanf("%d",&c);
    int min=a;
    if(min>b)
    {
        min=b;
    }
    if(min>c)
    {
        min=c;
    }
    printf("最小的数是：%d\n",min);
    return 0;
}