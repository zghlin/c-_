/*
	����һ������Ϊn�����飬������洢n������(1<=n<=10)
	����Сֵ�����±꣬�����Сֵ������Ӧ���±ꡣ
	������Сֵ������Сֵ���һ��������������������n������
*/

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n;
	int i;
	int min;
	int j;
	scanf("%d",&n);
	int a[10];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}                            //����һ������Ϊn�����鲢�������д�������
	min=a[0];
	j=0;
	for(i=1;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
			j=i;
		}
	}
	printf("������������ݵ���СֵΪ%d,���Ӧ�±�Ϊ%d\n",min,j);
	i=j;
	a[i]=a[0];
	a[0]=min;
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
	
	system("pause");
	return 0;
}