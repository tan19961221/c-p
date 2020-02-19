//编写程序实现从键盘读入文件名，计算该文件的行数(换行符的个数)并显示在界面上。

#include<stdio.h>

int main(void)
{
    int ch, cnt = 0;
    FILE *fp;
    char fname[FILENAME_MAX];

    printf("文件名: ");
    scanf("%s", fname);

    if ((fp = fopen(fname, "r")) == NULL)
        printf("\a文件打开失败。\n");
    else
    {
        while ((ch = fgetc(fp)) != EOF)
        {
            if (ch  == '\n')
                cnt++;
            putchar(ch);
        }
        fclose(fp);
    }

    return 0;
}