/*
	选择法排序，输入一个正整数n（1<=n<=10）
	再输入n个整数，用选择排序法将它从小到大排序后再输出。
	用两个循环
	这个程序真他妈难想
*/
#include<stdio.h>
#include<stdlib.h>
#define maxn 10   //定义符号常量maxn
int main(void)
{
	int i;
	int index;
	int k;
	int n;
	int temp;
	int a[maxn];
	printf("enter n:");  //根据提示输入n
	scanf("%d",&n);
	printf("enter %d integers:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);    // 将输入数依次赋给数组a的n个元素
	}
//  对n个数进行排序
	for(k=0;k<n-1;k++)
	{
		index=k;
		for(i=k+1;i<n;i++)
		{
			if(a[i]<a[index])
			{
				index=i;
			}
		}
		temp=a[index];
		a[index]=a[k];
		a[k]=temp;
	}
	//  输出n个数组元素的值
	printf("After sorted:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}

