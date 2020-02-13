//编写set函数，返回将无符号整数x的第pos位设为1后的值。

#include <stdio.h>

unsigned set(unsigned x, int pos)
{
    unsigned i = 1;

    return x | (i << pos);
}
unsigned reset(unsigned x, int pos)
{
    unsigned i = 1;

    return x & ~(i << pos);
}
unsigned inverse(unsigned x, int pos)
{
    unsigned i = 1;

    return x ^ (i << pos);
}
int main(void)
{
    unsigned i, pos;

    printf("请输入整型数及要操作的位数：");
    scanf("%u %u", &i, &pos);

    printf("将第%d位设为1后的值%d\n", pos, set(i, pos));
    printf("将第%d位设为0后的值%d\n", pos, reset(i, pos));
    printf("将第%d位取反后的值%d", pos, inverse(i, pos));

    return 0;
}