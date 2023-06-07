#include<stdio.h>
int main(void)
{
	char s[100],c;
	int n=0,i=0,flag=1,j=1,sum=0;
	do
	{
		scanf("%c",&c);
		if((c>='a'&&c<='f')||(c>='A'&&c<='F')||(c>='0'&&c<='9'))
		{
			s[i++]=c;
			n++;
		}
		else if(c=='-'&&n==0)
		{
			flag=0;
		}
	}while(c!='#');
	for(i=n-1;i>=0;i--)
	{
		if(s[i]>='a'&&s[i]<='f')
			sum+=j*(s[i]-'a'+10);
		else if(s[i]>='A'&&s[i]<='F')
			sum+=j*(s[i]-'A'+10);
		else if(s[i]>='0'&&s[i]<='9')
			sum+=j*(s[i]-'0');
		j*=16;
	}
	if(sum==0)
		printf("0\n");
	else if(flag==0)
		printf("-%d",sum);
	else printf("%d",sum);
	return 0;


}