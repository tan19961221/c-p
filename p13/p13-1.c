//代码清单13-1中的程序只能打开名为"abc"的文件。请将程序改为从键盘读入文件名，如果存在该名称的文件，就显示“该文件存在。”，否则就显示“该文件不存在。”。

#include<stdio.h>

int main(void)
{
    char s[128];
    FILE *fp;

    printf("请输入要打开的文件名: ");
    scanf("%s", s);
    fp = fopen(s, "r");
    if (fp == NULL)
        printf("该文件不存在。\n");
    else
        printf("该文件存在。\n");

    return 0;
}