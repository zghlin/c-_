/*
	输出所有大于平均值的数
	输入n个整数(1<=n<=10)
	计算这些数的平均数，在输出所有大于平均数的数
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	int i;
	int a[10];
	double sum;
	double average;
	sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	average=sum/n;
	printf("%.2f",average);
	for(i=0;i<n;i++)
	{
		if(a[i]>average)
			printf("大于平均值的数：%d\t",a[i]);
	}

	system("pause");
	return 0;
}