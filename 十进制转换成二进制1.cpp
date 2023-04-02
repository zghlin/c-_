#include<stdio.h>
int main(void)
{
	int a[i];
	int i=0;
	int num;
	scanf("%d",&num);
	while(num/2)
	{
		a[i]=num%2;
		i++;
		num=num/2;
	}
	a[i]=num;
	i++;
	for(int j=i-1;j>=0;j--)
		printf("%d",a[j]);
	return 0;
}