/*
读取两个整数的值，然后显示出它们的和、差、积、商和余数
*/
#include <stdio.h>
int main(void)
{
    int a,b;
    puts("请输入两个整数：");
    printf("整数a：");
    scanf("%d", &a);
    printf("整数b："); 
    scanf("%d", &b);
    printf("您输入的两个整数是：%d %d\n", a, b);
    printf("他们的和是%d\n", a + b);
    printf("他们的差是%d\n", a - b);
    printf("他们的积是%d\n", a * b);
    printf("他们的商%d\n", a / b);
    printf("他们的余数是%d\n", a % b);

    return 0;

}