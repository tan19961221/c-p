//编写如下函数，删除字符串str内的所有数字字符。

#include <stdio.h>
 
void del_digit(char *str) {
	
	char *temp = str;
	
	while (*temp)
		if((*temp >= '0') && (*temp <= '9')) 
			temp++;
		else 
			*str++ = *temp++;
	*str = '\0';
}
 
 
int main (void) {
	char str[128];
	
	puts("请输入一串字符。");
	scanf("%s",str);
	printf("%s\n",str);
	
	del_digit(str);
	
	printf("%s",str);
	
	return 0;
}