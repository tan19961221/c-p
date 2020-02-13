//对代码清单5-8中的程序进行修改，改为用对象式宏来定义元素个数。注意需要找到有关元素交换次数的规则。

#include <stdio.h>
#define NUM 7
int main(void)
{
    int i;
    int x[NUM];
    for (i = 0; i < NUM; i++)
    {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }
    for (i = 0; i < NUM / 2; i++)
    {
        int temp = x[i];
        x[i] = x[NUM - 1 - i];
        x[NUM - 1 - i] = temp;
    }
    puts("倒序排列了。");
    for (i = 0; i < NUM; i++)
        printf("x[%d] = %d\n", i, x[i]);
    return 0;
}