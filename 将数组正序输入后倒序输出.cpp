/*
	将一个数组倒序存储再正序输出
	数组长度不得超过20
*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i;
	int n;
	int a[20];
	scanf("%d",&n);
	for(i=n-1;i>=0;i--)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	system("pause");
	return 0;
}