//编写程序对整型常量、浮点型常量、int型变量和double型变量进行乘除等各种运算，从而验证本节介绍的规则。

#include <stdio.h>
int main(void)
{
    int a, b;
    double x, y;
    
    a = 1;
    b = 2;
    x = 0.1;
    y = 0.2;
    
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);    
    printf("a * x = %f\n", a * x);
    printf("a / x = %f\n", a / x);
    printf("x * y = %f\n", x * y);
    printf("x / y = %f\n", x / y);
    return (0);
}