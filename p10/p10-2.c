//编写如下函数，将*y年*m月*d日的日期，修改为其前一天或后一天的曰期。

#include <stdio.h>

int years(int *y)
{
    int i = 0;
    if ((*y) % 400 == 0 || ((*y) % 100 != 0 && (*y) % 4 == 0))
        i = 1;
    return i;
}

int day(int y, int m)
{
    int i = 0;
    switch (m)
    {
    case 4:
    case 6:
    case 8:
    case 11:
        i = 30;
        break;
    case 2:
        if (years(y))
            i = 29;
        else
            i = 28;
        break;
    default:
        i = 31;
        break;
    }
    return i;
}

void decrement_date(int *y, int *m, int *d)
{
    (*d)--;
    if (!(*d))
    {
        (*d) = day(*y, --(*m));
    }
    if (!(*m))
    {
        (*y)--;
        (*m) = 12;
    }
}

void increment_date(int *y, int *m, int *d)
{
    (*d)++;
    if ((*d) > day(*y, *m))
    {
        *d = 1;
        (*m)++;
    }
    if (*m > 12)
    { 
        (*y)++;
        (*m) = 1;
    }
}

int main(void)
{
    int y, m, d;

    puts("请输入年月日：");
    scanf("%d %d %d", &y, &m, &d);

    decrement_date(&y, &m, &d);

    printf("减少了一天的时期为%d年%d月%d日\n", y, m, d);

    increment_date(&y, &m, &d);

    printf("增加了一天的时期为%d年%d月%d日", y, m, d);

    return 0;
}