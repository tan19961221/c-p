//编写一段程序，输入两个整数，如果两数值相等，则显示“A和B相等。”。如果A大于B,则显示“A大于B。”。如果A小于B,则显示“A小于B。”。


#include <stdio.h>
int main(void)

{
    int a,b;
    printf("请输入两个整数：");
    scanf("%d %d",&a,&b);
    printf("整数A：%d\n",a);
    printf("整数B：%d\n",b);
    if(a==b)
    {
        printf("A和B相等\n");
    }
    else if(a>b)
    {
        printf("A大于B\n");  
    }
    else
    {
        printf("A小于B\n");
    }
    return 0;
}