/*
鸡兔同笼问题
鸡和兔子共n只，共m条脚。输入n和m，输出鸡和兔子的数量。如果没有解，输出“No”。
一、问题分析
分析：设鸡有a只，兔有b只，则a + b = n，2a + 4b = m，联解得a = (4n-m)/2，b = n-a.在什么情况下有正解呢？首先，a和b都是整数；其次，a和b必须是非负的。

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int chicken,rabbit,n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    chicken=(4*n-m)/2;
    rabbit=n-chicken;
    if(m%2==1||chicken<0||rabbit<0)
        printf("No");
    else
        printf("%d %d\n",chicken,rabbit);
    system("pause");
	return 0;
}
