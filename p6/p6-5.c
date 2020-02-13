/*--创建一个函数，返回1到n之间所有整数的和。---*/
 
#include <stdio.h>
 
int sumup(int n){
	int sum=0;
	
	while (n > 0){
		sum+=n;
		n--;
	}
		
	return sum;
}
 
int main(void)
{
	int a;
	
	scanf("%d",&a);
	printf("1到%d之间所有整数的和：%d",a,sumup(a));
	
	return 0;
}