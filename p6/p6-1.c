/*---返回两个int型整数中较小一数的值---*/
 
#include <stdio.h>
 
int min2(int a, int b){
	if (a > b)
		return b;
	else
		return a;
}
 
int main(void)
{
	int a, b;
	
	scanf("%d %d",&a, &b);
	printf("最小值为：%d", min2(a, b));
	
	return 0;
}