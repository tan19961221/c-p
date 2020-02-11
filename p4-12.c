/*编写一段程序，读取一个正整数，显示其位数。
※注意:代码清单4-10中while语句的循环次数和no的位数一致。
*/

#include <stdio.h>
int main(void)
{
	int no;
	int i=0;
	int no1;
	printf("请输入一个正整数：");
	scanf("%d",&no);
	no1 = no;
	while (no!=0)
	{
		no /= 10;
		i++;
	}
	printf("%d的位数是%d\n",no1,i);
	return 0;
}