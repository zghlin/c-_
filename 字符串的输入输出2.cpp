#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
	char str1[30]={0};
	printf("Input a string\n");
	//用gets输入
	gets(str1);
	printf("%s\n",str1);
	puts(str1);
	printf("上面的是用gets()输入的结果\n");
	//用scanf();输入
	scanf("%s",&str1);
	puts(str1);
	printf("%s\n",str1);
	printf("上面是scanf()输入的结果：\n");
	system("pause");
	return 0;
}
