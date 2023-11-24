
/*
5 4
1 1 2 1
1 1 1 1
1 1 2 1
1 2 1 1
1 1 1 2
1 1 4 3
*/
#include<cstdio>
using namespace std;
int m,n,p,q,min=999;//p,q表示终点坐标 
int a[100][100];//初始化地图数组，1表示空地，2表示障碍物.
int v[100][100];//初始化访问数组 ，0表示未访问 ，1表示访问 
void dfs(int x,int y,int step)
{
	if(x==p&&y==q)
	{
		if(step<min)
		{
			min=step;
		}
		return;
	}                                                                 // (x,y+1)   上下左右坐标图样 
	//顺时针试探                                                  (x-1,y)       (x,y)      (x+1,y)
	//右                                                                     (x,y-1)
	if(a[x+1][y]==1&&v[x+1][y]==0)
	{
		v[x+1][y]=1;
		dfs(x+1,y,step+1);
		v[x+1][y]=0;
	}
	//下
	if(a[x][y-1]==1&&v[x][y-1]==0)
	{
		v[x][y-1]=1;
		dfs(x,y-1,step+1);
		v[x][y-1]=0;
	}
	//左
	if(a[x-1][y]==1&&v[x-1][y]==0)
	{
		v[x-1][y]=1;
		dfs(x-1,y,step+1);
		v[x-1][y]=0;
	}
	//上
	if(a[x][y+1]==1&&v[x][y+1]==0)
	{
		v[x][y+1]=1;
		dfs(x,y+1,step+1);
		v[x][y+1]=0;
	}
	return;
}
int main()
{
	int startx,starty;
	scanf("%d%d",&m,&n);
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
		
	}
	scanf("%d%d%d%d",&startx,&starty,&p,&q);
	v[startx][starty]=1;
	dfs(startx,starty,0);
	printf("%d",min);
	return 0;
}
