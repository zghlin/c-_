/*
	输入一个整数n，输入一个数组。数组长度不超过20.
	输入一个整数x,在数组中查询有无x这个值。
	若有，则返回对应值的最小下标。
	若无，则输出"Not Found!"
*/

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	
	int n;
	int i;
	int x;
	int j;
	int flag;
	int a[20];
	flag=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("输入待查询的数:");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(x==a[i])
		{
			j=i;
			flag=1;
		}
	}
	printf("查询结果为:");
	if(flag==1)
		printf("x在数组中，其最小下标为%d",j);
	else
		printf("Not Found!");
	system("pause");
	return 0;
}