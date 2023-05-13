/*在N个数中查找x的位置。
本题要求完成函数的设计，实现在数组中查找x的位置并返回主函数输出。如x不存在，则输出"Not found!"。

函数接口定义：
int find(int a[], int x );
裁判测试程序样例：

*/
#include "stdio.h"
#define N 5
void main()
{
  int a[N],i; int x,k ;
  for(i=0;i<N;i++)
    scanf("%d",&a[i]);        
  scanf("%d",&x);   /* 输入被查找的x  */
  k=find(a,x);    /*   求x在a数组中的位置   */
  if(k==-1)   printf("Not found!");           
  else        printf("Loc is %d",k ); 
}
/*   编写的代码将放置到这里  */
/*
输入样例：
在这里给出一组输入。例如
10  8  5  6   7
6
输出样例：
在这里给出相应的输出。例如：

Loc is 4
代码长度限制
16 KB
时间限制
400 ms
内存限制
64 MB
*/
/*疑惑:
数组长度不定能用吗
k的值如何通过形参影响实参
  */
//我写的程序：







