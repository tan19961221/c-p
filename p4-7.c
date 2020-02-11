//编写一段程序，显示出小于输入的整数的所有2的乘方。

#include <stdio.h>
int main(void)
{
	int no;
	int i = 2;
	printf("请输入一个整数：");
	scanf("%d", &no);
	while (i < no)
	{
		printf("%d ", i);
		i *= 2;
	}
	printf("\n");
	return 0;
}