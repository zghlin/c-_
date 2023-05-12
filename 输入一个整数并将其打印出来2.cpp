#include<stdio.h>
#include<stdlib.h>                        //代码有点小问题
int f(int par);
int main(void)
{
	int num=1234;
	printf("%5d",f(num));
	system("pause");
	return 0;
}
int f(int par)
{
	int result=0;
	do
	{
		result=result*10+par%10;
		par/10;
	}while(par);
	return result;
}

















