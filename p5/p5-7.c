//编写一段程序，读取数组中的数据个数和元素值并显示。显示时，各值之间用逗号和空格分割，并用大括号将所有值括起来。


#include <stdio.h>
#define NUM 128
int main(void)
{
	int n;
	int i;
	int v[NUM];
	printf("数据个数：");
	scanf("%d",&n);
	for (i = 0; i < n; i++)
	{
		printf("%d号：",i+1);
		scanf("%d",&v[i]);
	}
	printf("{");
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d,", v[i]);
		else
			printf("%d",v[i]);
	}
	printf("}\n");
	return 0;
}