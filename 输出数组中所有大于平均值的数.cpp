/*
	������д���ƽ��ֵ����
	����n������(1<=n<=10)
	������Щ����ƽ��������������д���ƽ��������
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
			printf("����ƽ��ֵ������%d\t",a[i]);
	}

	system("pause");
	return 0;
}