
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
int m,n,p,q,min=999;//p,q��ʾ�յ����� 
int a[100][100];//��ʼ����ͼ���飬1��ʾ�յأ�2��ʾ�ϰ���.
int v[100][100];//��ʼ���������� ��0��ʾδ���� ��1��ʾ���� 
void dfs(int x,int y,int step)
{
	if(x==p&&y==q)
	{
		if(step<min)
		{
			min=step;
		}
		return;
	}                                                                 // (x,y+1)   ������������ͼ�� 
	//˳ʱ����̽                                                  (x-1,y)       (x,y)      (x+1,y)
	//��                                                                     (x,y-1)
	if(a[x+1][y]==1&&v[x+1][y]==0)
	{
		v[x+1][y]=1;
		dfs(x+1,y,step+1);
		v[x+1][y]=0;
	}
	//��
	if(a[x][y-1]==1&&v[x][y-1]==0)
	{
		v[x][y-1]=1;
		dfs(x,y-1,step+1);
		v[x][y-1]=0;
	}
	//��
	if(a[x-1][y]==1&&v[x-1][y]==0)
	{
		v[x-1][y]=1;
		dfs(x-1,y,step+1);
		v[x-1][y]=0;
	}
	//��
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
