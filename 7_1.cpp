//  对长度为n的数组中的元素进行从小到大地排序

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n;
	int arr[10];
	int i;
	int temp;
	for(i=0;i<n;i++)
	{
		scanf("%d",&n);
	}
	for(i=0;i<n-1;i++)
	{
		if(arr[i]>arr[i+1])
		{
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
	system("pause");
	return 0;
}