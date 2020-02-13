//创建函数put_count，显示被调用的次数(如下显示的是调用3次函数put_count的运行结果)
#include <stdio.h>

void put_count()
{
    static int a;

    a++;

    printf("put_coubt:第%d次\n", a);
}

int main(void)
{
    int a;

    for (a = 0; a < 3; a++)
        put_count();

    return 0;
}