//不使用下标运算符，实现代码清单9-11的str_toupper函数和str_totower函数。

#include <stdio.h>  
#include <ctype.h>
      
void str_toupper(char *s)
{
	while(*s!='\0')
	{
		*s = toupper(*s);
		s++;
	}
	return;
}
 
void str_tolower(char *s)
{
	while(*s!='\0')
	{
		*s = tolower(*s);
		s++;
	}
	return;
}
 
int main(void)  
{  
	int i;
	char s[128];
	printf("input string s:");
	scanf("%s",s);
 
	printf("output upper string:");
	str_toupper(s);
	printf("%s",s);
	printf("\n");
 
	printf("output lower string:");
	str_tolower(s);
	printf("%s",s);
	printf("\n");
 
    return 0;
}