#include "stdio.h"
#include "stdlib.h"
#define N 5
int find(int a[], int x );
void main()
{
  int a[N],i; int x,k ;
  for(i=0;i<N;i++)
    scanf("%d",&a[i]);        
  scanf("%d",&x);   /* 输入被查找的x  */
  k=find(a,x);    /*   求x在a数组中的位置   */
  if(k==-1)   printf("Not found!\n");           
 else        printf("Loc is %d",k ); 
system("pause");
}
/*   编写的代码将放置到这里  */
int find(int a[], int x )
{
    int index=-1;
    int i;
    for(i=0;i<N;i++)
    {
        if(a[i]==x)
        {
            index=i+1;
            break;
        }
    }
    return index;
}