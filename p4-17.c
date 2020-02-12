//编写一段程序，显示1到n的整数值的二次方。

#include <stdio.h>
int main(void)
{
	int n;
	int i = 1;
	printf("n的值：");
	scanf("%d", &n);
	while (i <= n)
	{
		printf("%d的二次方是%d\n",i,i*i);
		i++;
	}
	return 0;
}