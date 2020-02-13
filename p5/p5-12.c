//改写代码清单5-13的程序，将两次考试的分数存储在三维数组tensu中。


#include <stdio.h>
int main(void)
{
	int i,j,k;
	int tensu[2][4][3] = { {{ 91, 63, 78 },{ 67, 72, 46 },{ 89, 34, 53 },{ 32, 54, 34 } }, 
						 { { 97, 67, 82 }, { 73, 43, 46 }, { 97, 56, 21 }, { 85, 46, 35 }} };
	int sum[4][3] = { 0 };			/* 总分 */
	for (i = 0; i < 2; i++) /* 求两次考试的分数之和 */
	{
		for (j = 0; j < 4; j++) /* 4名学生的 */
		{							
			for (k = 0; k < 3; k++)	/* 3门课程的 */				
				sum[j][k] += tensu[i][j][k];	/* 两次的分数相加 */
		}
	}						
	puts("两次考试的分数");
	for (i = 0; i < 2; i++) 
	{
		if (i == 0)
			printf("第一次考试的分数\n");
		else
			printf("第二次考试的分数\n");
		for (j = 0; j < 4; j++) 
		{
			for (k = 0; k < 3; k++)
			{
				printf("%4d", tensu[i][j][k]);
			}	
			putchar('\n');
		}
		putchar('\n');
	}
	puts("总分");
	for (j = 0; j < 4; j++) {
		for (k = 0; k < 3; k++)
			printf("%4d", sum[j][k]);
		putchar('\n');
	}
	return 0;
}