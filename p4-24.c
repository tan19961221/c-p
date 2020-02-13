//编写一段程序，输入一个整数，显示出输入整数层的金字塔形状。 提示:第i行显示(i-1)*2+1个'*'。

#include "stdio.h"
int main(int argc, char const *argv[])
{
    int n;
    puts("让我们来描绘一个金字塔。");
    printf("金字塔有几层:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            putchar(' ');
        }
        for (int j = 1; j <= i; j++)
        {
            putchar('*');
        }
        for (int j = 1; j < i; j++)
        {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}