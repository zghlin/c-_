#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
	char str1[30]={0};
	printf("Input a string\n");
	//��gets����
	gets(str1);
	printf("%s\n",str1);
	puts(str1);
	printf("���������gets()����Ľ��\n");
	//��scanf();����
	scanf("%s",&str1);
	puts(str1);
	printf("%s\n",str1);
	printf("������scanf()����Ľ����\n");
	system("pause");
	return 0;
}
