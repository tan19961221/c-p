//编写一段程序，求4行3列矩阵和3行4列矩阵的乘积。各构成元素的值从键盘输入。


#include<stdio.h>
#define M 4
#define N 3 
int main()
{
    int a[M][N],b[N][M],c[M][M]={0};
    
    int i,j,k;
    
    puts("Please enter the first Matrix:");
    for(i = 0;i<M;i++)
        for(j = 0;j<N;j++)
            scanf("%d",&a[i][j]);
            
    puts("Please enter the second Matrix:");
    for(i = 0;i<N;i++)
        for(j = 0;j<M;j++)
            scanf("%d",&b[i][j]);
                  
    puts("The first Matrix is:");
    for(i = 0;i<M;i++){
        for(j = 0;j<N;j++)
            printf("%d\t",a[i][j]);
        putchar('\n');
    }
            
    puts("The second Matrix is:");
    for(i = 0;i<N;i++){
        for(j = 0;j<M;j++)
            printf("%d\t",b[i][j]);
        putchar('\n');
    }
    
    for(i = 0;i<M;i++)
        for(j = 0;j<M;j++)
            for(k = 0;k<N;k++)
                c[i][j] += a[i][k]*b[k][j];
    
    puts("The answer of first Matrix and second Matrix is:");            
    for(i = 0;i<M;i++){
        for(j = 0;j<M;j++)
            printf("%d\t",c[i][j]);
        putchar('\n');
        }
    
    return 0;
}