//不使用下标运算符，编写如下函数，返回字符串s中字符c的个数(若不存在,则为0)。

#include <stdio.h>
#include<string.h>
 
int str_chnum(const char *s,int c)
{
	int num = 0;
	while (*s != '\0')
	{
		if (*s == c)
			num++;
		s++;
	}
 
	return num;
}
 
int main(void)
{
	char s[128];
	char c;
	printf("input string s:");
	scanf("%s",s);
	getchar();
	printf("input character:");
	scanf("%c",&c);
	printf("string %s has %d character %c\n",s,str_chnum(s,c),c);
	
	return 0;
}