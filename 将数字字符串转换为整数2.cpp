#include<stdio.h>
#include<stdlib.h>
#include<string.h>
long fun(char *p);
int main(void)
{
	long num;
	char s[30];
	gets(s);
	num=fun(s);
	printf("%ld",num);
	system("pause");
	return 0;
}
long fun(char *p)
{
	int r;
	int pos=1;
	long res=0l;
	int i;
	int size;
	size=strlen(p);
	if(p[0]=='-')
		r=size-1;
	else
		r=size;
	for(i=0;i<r;i++)
	{
		res=res+(p[size-1-i]-48)*pos;
		pos=pos*10;
	}
	return p[0]=='-'?-res:res;
}