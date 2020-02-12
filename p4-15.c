//编写一段程序，显示出身高和标准体重的对照表。显示的身高范围和间隔由输入的整数值进行结控制，标准体重精确到小数点后2位。

#include <stdio.h>
int main(void)
{
	int sv;
	int ev;
	int gv;
	printf("开始数值（cm）：");
	scanf("%d",&sv);
	printf("结束数值（cm）：");
	scanf("%d", &ev);
	printf("间隔数值（cm）：");
	scanf("%d", &gv);
	while (sv<=ev)
	{
		printf("%dcm   %.2fkg\n", sv,0.9*(sv-100));
		sv += gv;
	}
	printf("\n");
	return 0;
}