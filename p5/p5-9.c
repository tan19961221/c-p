//编写一段程序，纵向显示练习5-8中得到的分布图。

#include<stdio.h>

#define NUMBER 80

int main(void)
{
    int i, j, max;
    int num;
    int tensu[NUMBER];
    int bunpu[11] = {0};

    printf("请输入学生人数: ");
    do{
        scanf("%d", &num);
        if (num < 1 || num > NUMBER)
            printf("请输入1-%d的数: ", NUMBER);
    }while (num < 1 || num > NUMBER);
    printf("请输入%d人的分数。\n", num);
    for (i = 0; i < num; i++)
    {
        printf("%2d号: ", i + 1);
        do{
            scanf("%d", &tensu[i]);
            if (tensu[i] < 1 || tensu[i] > 100)
                printf("请输入1~100的数: ");
        }while (tensu[i] < 1 || tensu[i] > 100);
        bunpu[tensu[i] / 10]++;
    }
    
    for(i=0;i<10;i++){
    	printf("%2d~%2d分数段含有%d个\n",i*10,i*10+9,bunpu[i]);     //为了更好地理解显示下各个分数段的个数 
	}
	printf("%5d分数段含有%d个\n",100,bunpu[10]);
	printf("\n");
    
    puts("\n--------------------分布图-------------------");

    max = bunpu[0];
    for (i = 1; i < 11; i++)
    {
        if (max < bunpu[i])
            max = bunpu[i];
    }
    for (j = max; j > 0; j--)
    {
        for (i = 0; i < 11; i++)
        {
            if (bunpu[i] >= j)
                printf(" *  ");
            else
                printf("    ");
        }
        putchar('\n');
    }
    putchar('\n');
    printf("---------------------------------------------\n");
    for (j = 0; j <= 100; j += 10)
    {
        printf(" %d ", j);
    }


    return 0;
}