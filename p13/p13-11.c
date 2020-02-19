//编写一个程序，读取含有10个double型元素的数组的所有元素值。

#include <stdio.h>

int main(void)
{
    FILE* fp;
    double v[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("v[%d]=", i);
        scanf("%lf", &v[i]);
    }

    if ((fp = fopen("PI.bin", "wb")) == NULL)        
        printf("\a文件打开失败。\n");
    else {
        fwrite(&v, sizeof(double), 10, fp);            
        fclose(fp);
    }                                              

    if ((fp = fopen("PI.bin", "rb")) == NULL)       
        printf("\a文件打开失败。\n");
    else {
        fread(&v, sizeof(double), 10, fp);
        for (i = 0; i < 10; i++) {
            printf("v[%d]=%.2f\n", i,v[i]);
        }


        fclose(fp);                             
    }

    return 0;
}