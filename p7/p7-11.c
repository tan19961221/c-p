//创建一个程序，分别对代码清单7-11和代码清单7-12进行改写，从0.0递增到1.0,每次递增0.01,求递增后的所有值的累计。注意对比二者的运行结果。

#include <stdio.h>

int main(void)
{
    float x1 = -0.01;
    float x2 = 0.0;
    int i;
    float sum1 = 0.0;
    float sum2 = 0.0;
    for (i = 0; i <= 100; i++)
    {
        printf("x = %f    x = %f\n", x1 += 0.01, (x2++) / 100);
        sum1 += x1;
        sum2 += x2 / 100;
    }
    printf("sum = %f   sum = %f", sum1, sum2);
    return 0;
}