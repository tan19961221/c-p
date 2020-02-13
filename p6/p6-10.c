//创建一个函数，对元素个数为n的int型数组v2进行倒序排列，并将其结果保存在数组v1中。

#include <stdio.h>
#define NUM 4
void intary_rcpy(int v1[],const int v2[],int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		v1[n - 1 - i] = v2[i];
	}
	return;
}
int main(void)
{
	int i;
	int v2[NUM] = {19,63,34,76};
	int v1[NUM];
	intary_rcpy(v1,v2,NUM);
	for (i = 0; i < NUM; i++)
	{
		printf("v1[%d] = %d\n",i,v1[i]);
	}
	return 0;
}