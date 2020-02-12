//编写一段程序，根据输入的整数，循环显示1234567890，显示的位数和输入的整数值相同。


#include <stdio.h>
int main(void)
{
	int n;
	int i = 1;
	printf("请输入一个整数：");
	scanf("%d",&n);
	while (i<=n)
	{
		printf("%d", i % 10);
		i++;
	}
	printf("\n");
	return 0;
}