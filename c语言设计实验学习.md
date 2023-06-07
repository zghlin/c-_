内容概要:
1. 字符串转换成十进制整数
2. 使用函数的选择法排序
3. 递归实现顺序输出整数
4. 字符串的连接
5. 递归求阶乘和
6. 递归实现逆序输出整数
7. 递归实现求 Fabonacci 数列

1.字符串转换成十进制整数：输入一个以#结束的字符串，滤去所有的非十六进制字符（不分大小写），组成一个新的表示十六进制数字的字符串，
然后将其转换为十进制数后输出。如果过滤后字符串的首字符为“-”，代表该数是负数。试编写相应程序.

```c
//程序源代码
#include<stdio.h>
int main(void)
{
	char s[100],c;
	int n=0,i=0,flag=1,j=1,sum=0;
	do
	{
		scanf("%c",&c);
		if((c>='a'&&c<='f')||(c>='A'&&c<='F')||(c>='0'&&c<='9'))
		{
			s[i++]=c;
			n++;
		}
		else if(c=='-'&&n==0)
		{
			flag=0;
		}
	}while(c!='#');
	for(i=n-1;i>=0;i--)
	{
		if(s[i]>='a'&&s[i]<='f')
			sum+=j*(s[i]-'a'+10);
		else if(s[i]>='A'&&s[i]<='F')
			sum+=j*(s[i]-'A'+10);
		else if(s[i]>='0'&&s[i]<='9')
			sum+=j*(s[i]-'0');
		j*=16;
	}
	if(sum==0)
		printf("0\n");
	else if(flag==0)
		printf("-%d",sum);
	else printf("%d",sum);
	return 0;


}

```
```c
#include<stdio.h>
int main(void)
{
	char s[100];
	char c;
	int i=0;
	int n=0;
	int flag=1;
	int sum=0;
	int j=1;
	do
	{
		scanf("%c",&c);//少个取地址符输不出来结果
		if((c>='a'&&c<='f')||(c>='A'&&c<='F')||(c>='0'&&c<='9'))
		{
			s[i++]=c;
			n++;
		}
		else if(c=='-'&&n==0)
			flag=0;
		
	}while(c!='#');
	for(i=n-1;i>=0;i--)
	{
		if(s[i]>='a'&&s[i]<='f')
			sum=sum+j*(s[i]-'a'+10);
		else if(s[i]>='A'&&s[i]<='F')
			sum=sum+j*(s[i]-'A'+10);
		else if(s[i]>='0'&&s[i]<='9')
			sum=sum+j*(s[i]-'0');
		j=j*16;
	}
	if(flag==0)
		printf("-%d",sum);
	else
		printf("%d",sum);
	return 0;
}

//运行有问题
```
```c 
int i=0;
char s[100],c;
do
{
    scanf("%c",c);
    s[i++]=c;
}while(c!='#');
// 意为当输入'#'是停止字符串的输入
```

```c
for(i=n-1;i>=0;i--)
{
    pass;
    j*=16;
}
//逆序，从末到前使字符串转换
```
```c
if(c>='a'&&c<='f')
    sum=sum+j*(c-'a'+10);
else if(c>='A'&&c<='F')
    sum=sum+j*(c-'A'+10);
else if(c>='0'&&c<='9')
    sum=sum+j*(c-'0');
```
```c
else if(c='-'&&n==0)
    flag=0;
//当且仅当首个输入字符为负号时，指示数为0
```
```c
if(sum==0)//有单列出来的必要吗？
```
```c
//(a到f)||(A到F)||(0到9)为非16进制字符
```

2.使用函数的选择法排序 ：定义函数 void sort(int a[]，int n)，用选择法对数组 a 中的元素升序排序。
自定义主函数，并在其中调用 sort 函数。试编写相应程序.


3.递归实现顺序输出整数：输入一个正整数 n，编写递归函数实现对其进行按位顺序输出。试编写相应程序。

4.字符串的连接：输入两个字符串，输出连接后的字符串。要求自定义函数 char *strcat(char*s, char *t)，将字符串 t 复制到字符串 s 的末端，
并且返回字符串 s 的首地址。试编写相应程序。

5.递归求阶乘和：输入一个整数 n(n>0 且 n≤10)，求 1!+2!+3!+...+n!。定义并调用函数 fact(n)计算 n!，函数类型是 double。试编写相应程序。

6.递归实现逆序输出整数：编写实现对一个整数进行逆序处理的递归函数，函数需要有返回值，其值为逆序后的数据。

7.递归实现求 Fabonacci 数列：用递归方法编写求斐波那契数列的函数，返回值为整型，并写出相应的主函数。斐波那契数列的定义为：
   f(0) = 0，f(1) = 1
   f(n) = f(n - 2) + f(n - 1) （n＞1）
