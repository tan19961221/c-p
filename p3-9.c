//使用条件运算符替换练习3-6的程序中的if语句，实现同样的功能。

#include <stdio.h>
int main(void)
{
    int a,b,c,min;
    puts("请输入三个整数。");
    printf("整数A：");
    scanf("%d",&a);
    printf("整数B：");
    scanf("%d",&b);
    printf("整数C：");
    scanf("%d",&c);
    min=(a<b)?a:b;
    min=(min<c)?min:c;
    
    printf("最小的数是：%d\n",min);
    return 0;
}