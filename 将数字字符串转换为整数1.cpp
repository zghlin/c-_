#include<stdio.h>
#include<stdlib.h>
#include<string.h>
long  fun ( char *p);
int main(void)   
{ 
	char s[10];
    long    n;
    gets(s);
    n = fun(s);
    printf("%ld\n",n);
	system("pause");
	return 0;
}


/* 请在这里填写答案 */
long fun(char *p)
{
	int r=0;
	long res=0l;
	int pos=1;
	int i;
	int size=strlen(p);
	if(p[0]=='-')
	{
		r=size-1;

	}
	else
	{
		r=size;
	}
	for(i=0;i<r;++i)
	{
		res=res+(p[size-1-i]-48)*pos;
		pos=pos*10;
	}
	return p[0]=='-'?-res:res;
}

