//编写一段程序，读取两个整数的值，然后计算出它们之间所有整数的和。


#include <stdio.h>
int main(void)
{
	int a,b;
	int sum = 0;
	int min,max;
	puts("请输入两个整数。");
	printf("整数A：");scanf("%d", &a);
	printf("整数B：");scanf("%d", &b);
	min = (a > b) ? b : a;
	max = (a > b) ? a : b;
	while (min <= max)
	{
		sum += min;
		min++;
	}
	printf("它们之间所有整数的和是%d。\n",sum);
	return 0;
}