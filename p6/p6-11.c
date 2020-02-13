//创建一个函数search_idx,将和有n个元素的数组v中的key相等的所有元素的下标存储在数组idx中，返回和key相等的元素的个数。

#include <stdio.h>
int search_idx(const int v[],int idx[],int key,int n)
{
	int i;
	int j = 0;
	int idx_num;
	for (i = 0; i < n; i++)
	{
		if (v[i] == key)
		{
			idx[j] = i;
			j++;
		}
	}
	return j;
}
int main(void)
{
	int i;
	int num;
	int v[] = {1,7,5,7,2,4,7};
	int key = 7;
	int idx[7] = {0};
	num = search_idx(v,idx,key,7);
	printf("和key相等的元素的个数为%d。\n",num);
	for (i = 0; i < 7; i++)
	{
		printf("idx[%d] = %d\n",i,idx[i]);
	}
	return 0;
}