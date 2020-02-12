//编写一段程序，输入一个整数值，显示该整数个'*'。每显示5个就进行换行。

#include <stdio.h>
int main(void)
{
	int n;
	int i = 0;
	printf("显示多少个*：");
	scanf("%d", &n);
	while (i < n)
	{
		if ((i % 5 != 0)||(i==0))
			putchar('*');
		else
			printf("\n*");
		i++;
	}
	printf("\n");
	return 0;
}