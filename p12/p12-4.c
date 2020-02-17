/*对代码清单12-7的程序进行改写。

不将姓名、身高等数据作为初始值，而是从键盘输入。

可以选择按身高进行升序排列，或者按照姓名的顺序排列。*/


#include <stdio.h>
#include <string.h>
 
#define NUMBER 5
#define NAME_LEN 64
 
 
typedef struct
{
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;
 
} Student;
 
void swap_Student(Student *x,Student *y)
{
    Student t=*x;
    *x=*y;
    *y=t;
}
void sort_by_height(Student a[],int n)
{
    int i,j;
    for(i=0; i<n-1; i++)
    {
        for(j=n-1; j>i; j--)
        {
            if(a[j].height<a[j-1].height)
            {
                swap_Student(&a[j],&a[j-1]);
            }
        }
    }
 
}
 
void sort_by_name(Student a[],int n)
{
    int i,j;
    for(i=0; i<n-1; i++)
    {
        for(j=n-1; j>i; j--)
        {
            if(strcmp(a[j].name,a[j-1].name)<0)
            {
                swap_Student(&a[j],&a[j-1]);
            }
        }
    }
 
}
 
int main(void)
{
    int i=0;
    int j=NUMBER;
    Student std[NUMBER];
 
    while(j>0)
    {
        printf("请录入第%d个学生的信息:\n",i+1);
        printf("name:");
        scanf("%s",std[i].name);
        printf("height:");
        scanf("%d",&std[i].height);
        printf("weight:");
        scanf("%f",&std[i].weight);
        printf("schols:");
        scanf("%ld",&std[i].schols);
        printf("\n");
        i++;
        j--;
    }
    sort_by_height(std,NUMBER);
    puts("按照身高排序：");
    for(i=0; i<NUMBER; i++)
    {
        printf("%-8s %6d%6.1f%7ld\n",std[i].name,std[i].height,std[i].weight,std[i].schols);
    }
    printf("\n");
 
    sort_by_name(std,NUMBER);
    puts("按照姓名排序：");
    for(i=0; i<NUMBER; i++)
    {
        printf("%-8s %6d%6.1f%7ld\n",std[i].name,std[i].height,std[i].weight,std[i].schols);
    }
    printf("\n");
    return 0;
 
}