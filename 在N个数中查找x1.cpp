#include "stdio.h"
#include "stdlib.h"
int find(int a[],int x);
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
	system("pause");
}
/*   编写的代码将放置到这里  */
int find(int a[],int x)
{
	int i,index=-1;
	for(i=0;i<N;i++)
	{
		if(a[i]==x)
		index=i+1;
	}
	return index;
}