//编写一段程序，求1到n的和。n的值从键盘输入


#include <stdio.h>
int main(void)
{
    int n;
    int i=1;
    int sum=0;
    printf("请输入一个整数：");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("1到%d的和是%d",n,sum);
    return 0;
}