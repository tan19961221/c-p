//编写一段程序，确认相等运算符和关系运算符的运算结果是1和0。

#include <stdio.h>

int main(void)
{
    int a;

    a=(4>=3);
    printf("%d\n",a);

    a=(4<=3);
    printf("%d\n",a);

    a=(4==3);
    printf("%d\n",a);

    a=(4!=3);
    printf("%d\n",a); 
    return 0;
}