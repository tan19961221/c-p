/*---编程确认对无符号整数执行算术运算不会发生数据溢出。---*/

#include <stdio.h>
#include <limits.h>
int main(void)
{
	unsigned int x;
	x = UINT_MAX;
	printf("x = %u\n",x);
	printf("x + 1 = %u\n",x+1);
	return 0;
}