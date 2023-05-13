#include<stdio.h>
#include<stdlib.h>
#include<string.h>
define max 30
int main(void)
{
	
	return 0;
}
int fun(char * s)
{
	int k;
	char line[max];
	k=0;
	while((line[k]=getchar())!='\n')
	{
		k++;
	}
	line[k]='\0';
	if(fun(line)==1)
		printf("这是一个回文数\n");
	else printf("这不是一个回文数\n");
	return 0;
}