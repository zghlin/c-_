#include<stdio.h>
int main(void)
{
	char s[100];
	char c;
	int i;
	int n=0;
	int flag=1;
	int sum=0;
	int j=1;
	do
	{
		scanf("%c",c);
		if((c>='a'&&c<='f')||(c>='A'&&c<='F')||(c>='0'&&c<='9'))
		s[i++]=c;
		if(c=='-'&&n==0)
			flag=0;
		n++;
	}while("c!='#'");
	for(i=n-1;i>=0;i--)
	{
		if(c>='a'&&c<='f')
			sum=sum+j*(c-'a'-10);
		else if(c>='A'&&c<='F')
			sum=sum+j*(c-'A'-10);
		else if(c>='0'&&c<='9')
			sum=sum+j*(c-'0');
		j=j*16;
	}
	if(flag==0)
		printf("-%d",sum);
	else
		printf("%d",sum);
	return 0;
}

//运行有问题