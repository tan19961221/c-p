/*输入一个实数作为面积，求面积为该实数的正方形的边长。 */
 
#include <stdio.h>
#include <math.h>
 
int main(void)
{
	int area;
	
	puts("请输入一个正方形的面积：");
	scanf("%d", &area);
	printf("该正方形的边长为：%f",sqrt(area));
	
	return 0; 
}