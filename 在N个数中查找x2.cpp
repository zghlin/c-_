#include "stdio.h"
#include "stdlib.h"
#define N 5
int find(int a[], int x );
void main()
{
  int a[N],i; int x,k ;
  for(i=0;i<N;i++)
    scanf("%d",&a[i]);        
  scanf("%d",&x);   /* ���뱻���ҵ�x  */
  k=find(a,x);    /*   ��x��a�����е�λ��   */
  if(k==-1)   printf("Not found!\n");           
 else        printf("Loc is %d",k ); 
system("pause");
}
/*   ��д�Ĵ��뽫���õ�����  */
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