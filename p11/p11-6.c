//不使用下标运算符，编写如下函数，若字符串S中含有字符C(若含有多个，以先出现的为准)，则返回指向该字符的指针，否则返回空指针。

#include <stdio.h>
#include<string.h>
 
char *str_chr(const char *s,int c)
{
	int *chr_flag;
	while (*s != '\0')
	{
		if (*s == c)
		{
			chr_flag = s;
			break;
		}
		else
			chr_flag = NULL;
		s++;
	}
	return chr_flag;
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
	printf("pointer of character %c is %p\n",c,str_chr(s,c));
	
	return 0;
}