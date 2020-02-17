//不使用下标运算符，编写如下函数，显示字符串s。

#include <stdio.h>
#include<string.h>
 
void put_string(const char *s)
{
	int str_len;
	int i;
	str_len = strlen(s);
	for (i = 0; i < str_len; i++)
	{
		printf("%c",*s);
		s++;
	}
	return;
}
 
int main(void)
{
	char s[] = "abcdef";
	put_string(s);
	printf("\n");
 
	return 0;
}