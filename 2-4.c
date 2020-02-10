/*
对读取的整数值进行符号取反操作，并输出结果
*/
#include <stdio.h>

int main(void)
{
    int a;

    printf("请输入一个整数：");
    scanf("%d", &a);

    printf("符号取反之后的值是%d。\n", -a);

    return 0;
}