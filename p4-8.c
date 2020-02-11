//改写代码清单4-8的程序，当输入的值小于1时不输出换行符。

#include <stdio.h>
int main(void)
{
	int no;
	printf("正整数:");
	scanf("%d", &no);
	while (no-- > 0)
		putchar('*');
	if(no == -1)
		putchar('\n');
	return 0;
}