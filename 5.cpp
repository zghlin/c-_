/*
	用数组计算并存放斐波那契数列
	按每行打印5个数，若最后一行的数少于5，也需换行
	  输出斐波那契数列
*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i;
	int n;
	scanf("%d",&n);
	int fib[46]={1,1};
	for(i=2;i<n;i++)
	{
		fib[i]=fib[i-1]+fib[i-2];
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",fib[i]);
		if((i+1)%5==0)
			printf("\n");
	}
	if(n%5!=0){
		printf("\n");
	}

	system("pause");
	return 0;
}