/*
	����һ������n,0<n<=10.
	����һ������Ϊn�����飬���������е����ֵ������С�±�
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
	printf("��������������%d,�����±���%d",max,j);
	system("pause");
	return 0;
}