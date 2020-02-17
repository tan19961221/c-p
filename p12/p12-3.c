//编写如下函数，从键盘输入int型、long型和double型的值，将这些值作为xyz结构体的成员，返回该结构体的值。

#include <stdio.h>
 
 
struct xyz
{
	int x;
	long y;
	double z;
};
 
struct xyz scan_xyz(int x, long y,double z)
{
	struct xyz t;
	t.x = x;
	t.y = y;
	t.z = z;
	return t;
}
 
int main(void)
{
	int x;
	long y;
	double z;
	struct xyz p;
	printf("请输入x:");
	scanf("%d",&x);
	printf("请输入y:");
	scanf("%ld", &y);
	printf("请输入z:");
	scanf("%lf", &z);
	p = scan_xyz(x, y, z);
	printf("x = %d\n",p.x);
	printf("y = %ld\n", p.y);
	printf("z = %lf\n",p.z);
 
	return 0;
}