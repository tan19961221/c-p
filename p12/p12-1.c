//在代码清单12-3的基础上，编写显示对象takao各成员地址的程序。

#include <stdio.h>
 
#define NAME_LEN 64
 
struct student
{   char name[NAME_LEN];
    int height;
    float weight;
    long schols;
};
int main(void)
{
    struct student takao= {"Takao",173,86.2};
    printf("姓名地址:%p\n",&(takao.name));
    printf("身高地址:%p\n",&(takao.height));
    printf("体重地址:%p\n",&(takao.weight));
    printf("奖学金地址:%p\n",&(takao.schols));
 
}