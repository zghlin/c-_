#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int h;//����ͷ������
	int f;//����ŵ�����
	int x;//���弦������
	int y;//�����õ�����
	printf("�ó���������⼦��ͬ������\n������ͷ������:\n");
	scanf("%d",&h);
	printf("������ŵ�����:\n");
	scanf("%d",&f);
	if(((4*h-f)%2!=0)||(x<0)||(y<0))
		printf("�����޽�\n");
	else
	{
		y=(4*h-f)/2;
		x=h-y;
		printf("��������Ϊ:%d ,�õ�����Ϊ:%d",x,y);

	}
	system("pause");
	return 0;
}