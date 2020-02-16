//编写如下函数，将n1、n2、n3指向的三个int型整数按升序排列。

#include<stdio.h>
 
void sort3(int *n1, int *n2, int *n3)
{
	int tmp;
	if (*n1 > *n2)
	{
		tmp = *n2;
		*n2 = *n1;
		*n1 = tmp;
	}
	if (*n1 > *n3)
	{
		tmp = *n3;
		*n3 = *n1;
		*n1 = tmp;
	}
	if (*n2 > *n3)
	{
		tmp = *n2;
		*n2 = *n3;
		*n3 = tmp;
	}
	return;
}
int main(void)
{
	int n1,n2,n3;
	printf("input n1 n2 n3:");
	scanf("%d %d %d",&n1,&n2,&n3);
	sort3(&n1,&n2,&n3);
	printf("sort:%d %d %d\n",n1,n2,n3);
 
	return 0;
}