//编写一段程序，使之交替显示+和-，总个数等于所输入的整数值。另外，当输入0以下的整数时，则什么也不显示。


#include <stdio.h>
int main(void)
{
	int no;
	printf("正整数：");
	scanf("%d",&no);
	while (no--)
	{
		if (no % 2)
			putchar('-');
		else
			putchar('+');
	}
	printf("\n");
	return 0;
}