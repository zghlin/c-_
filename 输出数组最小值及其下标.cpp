/*
	构建一个长度为n的数组，并向其存储n个数。(1<=n<=10)
	求最小值及其下标，输出最小值和他对应的下标。
	交换最小值，将最小值与第一个数交换，输出交换后的n个数。
*/

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n;
	int i;
	int min;
	int j;
	scanf("%d",&n);
	int a[10];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}                            //构建一个长度为n的数组并向数组中存入数据
	min=a[0];
	j=0;
	for(i=1;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
			j=i;
		}
	}
	printf("这个数组中数据的最小值为%d,其对应下标为%d\n",min,j);
	i=j;
	a[i]=a[0];
	a[0]=min;
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
	
	system("pause");
	return 0;
}