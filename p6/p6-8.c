//创建一个函数，返回元素个数为n的int型数组v中的最小值。

#include <stdio.h>
int min_of(const int v[], int n)
{
	int min;
	int i;
	min = v[0];
	for (i = 1; i < n; i++)
	{
		if (v[i] < min)
			min = v[i];
	}
	return min;
}
int main(void)
{
	int min;
	int v[4] = {19,63,34,76};
	min = min_of(v,4);
	printf("min = %d\n",min);
	return 0;
}