/*在N个数中查找x的位置。
本题要求完成函数的设计，实现在数组中查找x的位置并返回主函数输出。如x不存在，则输出"Not found!"。


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





