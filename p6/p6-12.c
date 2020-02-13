//创建一个函数，将4行3列矩阵a和3行4列矩阵b的乘积，存储在3行3列矩阵c中。

#include <stdio.h>
void mat_mul(const int a[4][3],const int b[3][4],int c[3][3])
{
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			c[i][j] = b[i][0]*a[0][j] + b[i][1] * a[1][j] + b[i][2] * a[2][j] + b[i][3] * a[3][j];
		}
	}
	return;
}
int main(void)
{
	int i, j;
	int a[4][3] = { {1,2,3} ,{4,5,6} ,{7,8,9} ,{10,11,12} };
	int b[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	int c[3][3] = { 0 };
	mat_mul(a,b,c);
	printf("a = \n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	printf("b = \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%4d", b[i][j]);
		}
		printf("\n");
	}
	printf("c = b * a = \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%4d",c[i][j]);
		}		
		printf("\n");
	}
	return 0;
}