## 数组
### 一维数组的使用
<li>输出所有大于平均值的数

```c
#include<stdio.h>
int main(void)
{
    int n,i,a[10];
    double sum,average;

    printf("enter n:\n");
    scanf("%d",&n);
    if(n>=1&&n<=10)
    {
        printf("enter %d integers\n",n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        
        sum=0;
        for(i=0;i<n;i++)
        {
            sum=sum+a[i];
        }
        average=sum/n;
        printf("average=%.2f",average);
        for(i=0;i<n;i++)
        {
            if(a[i]>average){
                printf("%4d",a[i]);
            }
        }
        printf("\n");
    }else{
        printf("Invalid value\n");
    }
    return 0;
}

```
<li>输出斐波那契数列

```c
#include<stdio.h>
int main(void)
{
    int fib[10]={1,1};
    int i,n;
    printf("enter n:\n");
    scanf("%d",&n);
    if(n>=1&&n<=10)
    {
        for(i=2;i<n;i++)
        {
            fib[i]=fib[i-1]+fib[i-2];
        }
        for(i=0;i<n;i++)
        {
            printf("%d\t",fib[i]);
            if((i+1)%5==0){
                printf("\n");
            }
        }
        if((n%5)!=0)
        {
            printf("\n");
        }
    }else{
        printf("Invalid value\n");
    }
    return 0;
}
```
<li>查找数组中符合条件的所有整数 顺序查找法

```c
#include<stdio.h>
int main(void)
{
    int a[10],i,n,flag=0,x;
    
    printf("enter n x:\n");
    scanf("%d%d",&n,&x);
    printf("enter %d integers\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(x==a[i])
        {
            printf("%d\t%d\t\n",i,a[i]);
            flag=1;
        }

    }
    if(flag==0)
    {
        printf("not found\n");
    }
    return 0;
}
```
<li>选择排序法

```c
#include<stdio.h>
int main(void)
{
    int a[10],i,k,index,n,temp;
    
    printf("enter n:\n");
    scanf("%d",&n);
    if(n>=1&&n<=10)
    {
        printf("enter %d integers\n",n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            printf("%3d",a[i]);
        }
        printf("\n");
        for(k=0;k<n-1;k++)
        {
            index=k;
            for(i=k+1;i<n;i++)
            {
                if(a[i]<a[index])
                {
                    index=i;
                }
                
            }
			temp=a[index];
			a[index]=a[k];
			a[k]=temp;
        }
        printf("After sorted:\n");
        for(i=0;i<n;i++)
        {
            printf("%3d",a[i]);
        }
        printf("\n");
    }else{
        printf("Inavlid value\n");
    }
    
    return 0;
}
```
<li>投票情况统计

```c
#include<stdio.h>
int main(void)
{
    int i,response,count[8];

    for(i=1;i<=8;i++)
    {
        count[i]=0;
    }

    printf("enter response:\n");
    for(i=0;i<10;i++)
    {   
        scanf("%d",&response);
        if(response>=1&&response<=8)
        {
            count[response]++;
        }
    }
    for(response=1;response<8;response++)
    {
        if(count[response]!=0)
        {
            printf("%2d %2d\n",response,count[response]);
        }
    }
    return 0;
}
```
<li>输出矩阵中最小值及其下标

```c
#include<stdio.h>
#define maxm 6
#define maxn 6
int main(void)
{
    int a[maxm][maxn],m,n,i,j,mini,minj;
    
    printf("enter m n:\n");
    scanf("%d%d",&m,&n);
    printf("enter %d integers\n",m*n);

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%3d",a[i][j]);
            if((j+1)%n==0)
            {
                printf("\n");
            }
        }
    }
    printf("\n");
    mini=minj=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]<a[mini][minj])
            {
                mini=i;
                minj=j;
            }
        }
    }
    printf("min=a[%d][%d]=%d\n",mini,minj,a[mini][minj]);
    return 0;
}
```

### 二维数组的使用

<li>找矩阵中最大值所在位置

### 字符数组及字符串
<li>判断回文
<li>字符串
