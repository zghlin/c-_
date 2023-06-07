#include<stdio.h>
int main(void)
{
	char s[100];
	char c;
	int i=0;
	int n=0;
	int flag=1;
	int sum=0;
	int j=1;
	do
	{
		scanf("%c",&c);
		if((c>='a'&&c<='f')||(c>='A'&&c<='F')||(c>='0'&&c<='9'))
		{
			s[i++]=c;
			n++;
		}
		else if(c=='-'&&n==0)
			flag=0;
		
	}while(c!='#');
	for(i=n-1;i>=0;i--)
	{
		if(s[i]>='a'&&s[i]<='f')
			sum=sum+j*(s[i]-'a'+10);
		else if(s[i]>='A'&&s[i]<='F')
			sum=sum+j*(s[i]-'A'+10);
		else if(s[i]>='0'&&s[i]<='9')
			sum=sum+j*(s[i]-'0');
		j=j*16;
	}
	if(flag==0)
		printf("-%d",sum);
	else
		printf("%d",sum);
	return 0;
}

//运行有问题