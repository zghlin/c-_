/*
	输入一个整数n,0<n<=10.
	输入一个长度为n的数组，返回数组中的最大值及其最小下标
*/

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i;
	int n;
	int a[10];
	int max;
	int j;
	j=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
			j=i;
		}
	}
	printf("数组中最大的数是%d,他的下标是%d",max,j);
	system("pause");
	return 0;
}