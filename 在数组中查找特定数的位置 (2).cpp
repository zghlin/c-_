/*��N�����в���x��λ�á�
����Ҫ����ɺ�������ƣ�ʵ���������в���x��λ�ò������������������x�����ڣ������"Not found!"��


/*   ��д�Ĵ��뽫���õ�����  */
/*
����������
���������һ�����롣����
10  8  5  6   7
6
���������
�����������Ӧ����������磺

Loc is 4
���볤������
16 KB
ʱ������
400 ms
�ڴ�����
64 MB
*/
#include <stdio.h>
#include <stdlib.h>
#define N 20
 
int main()
{
    int n,x,i,arr[N],flag=0;
    scanf("%d%d",&n,&x);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            printf("%d",i);
            flag++;
        }
    }
    if(flag==0)
        printf("Not Found");
	system("pause");
	return 0;
}





