//编写一段程序，显示以所输入整数为边长的正方形。

#include <stdio.h>
int main(void)
{
	int n;
	int i;
	int j;
	printf("生成一个正方形");
	printf("正方形有几层：");
	scanf("%d",&n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}