//请采用代码清单13-2的文件写入形式，编写一个从键盘读取姓名、身高和体重,并将这些数据写入文件的程序。

#include<stdio.h>

int main(void)
{
    FILE *fp;
    char name[100];
    double height, weight;

    printf("请输入姓名，身高，体重。\n");
    scanf("%s %lf %lf", name, &height, &weight);
    if ((fp = fopen("dt_dat", "w")) == NULL)
        printf("\a文件打开失败。\n");
    else
    {
        printf("写出姓名，身高，体重。\n");
        fprintf(fp, "%s %lf %lf\n", name, height, weight);
        fclose(fp);
    }

    return 0;
}