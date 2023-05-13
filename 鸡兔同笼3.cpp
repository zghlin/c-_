#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int h;//定义头的数量
	int f;//定义脚的数量
	int x;//定义鸡的数量
	int y;//定义兔的数量
	printf("该程序用于求解鸡兔同笼问题\n请输入头的数量:\n");
	scanf("%d",&h);
	printf("请输入脚的数量:\n");
	scanf("%d",&f);
	if(((4*h-f)%2!=0)||(x<0)||(y<0))
		printf("该题无解\n");
	else
	{
		y=(4*h-f)/2;
		x=h-y;
		printf("鸡的数量为:%d ,兔的数量为:%d",x,y);

	}
	system("pause");
	return 0;
}