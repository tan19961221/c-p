//编写一段程序，输入6名学生2门课程(语文、数学)的分数，显示各门课程的总分和平均分，以及各个学生的总分和平均分。

#include <stdio.h>
#define STU_NUM 6
int main(void)
{
	int i;
	int j;
	int score[STU_NUM][2];
	int yw_sum = 0;
	int yw_avg = 0;
	int sx_sum = 0;
	int sx_avg = 0;
	for (i = 0; i < STU_NUM; i++)
	{
		j = 0;
		printf("学生%d\n",i+1);
		printf("语文分数：");
		scanf("%d",&score[i][j]);	
		yw_sum += score[i][j];
		printf("数学分数：");
		scanf("%d", &score[i][j+1]);
		sx_sum += score[i][j+1];
	}
	yw_avg = yw_sum / STU_NUM;
	sx_avg = sx_sum / STU_NUM;
	printf("语文总分：%d\n",yw_sum);
	printf("数学总分：%d\n",sx_sum);
	printf("语文平均分：%d\n", yw_avg);
	printf("语文平均分：%d\n", sx_avg);
	for (i = 0; i < STU_NUM; i++)
	{
		printf("学生%d总分为%d,平均分为%d。\n",i+1,score[i][0]+score[i][1], (score[i][0] + score[i][1])/2);
	}
	return 0;
}