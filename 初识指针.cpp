#include<stdio.h>
int main(void)
{
	int a=100,b=10;
	int * pointer_1,* pointer_2;
	pointer_1=&a;
	pointer_2=&b;
	printf("a=%d,b=%d\n",a,b);
	printf("* pointer_1=%d,* pointer_2=%d",* pointer_1,* pointer_2);
	getchar();
	
	return 0;
}