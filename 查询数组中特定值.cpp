/*
	����һ������n������һ�����顣���鳤�Ȳ�����20.
	����һ������x,�������в�ѯ����x���ֵ��
	���У��򷵻ض�Ӧֵ����С�±ꡣ
	���ޣ������"Not Found!"
*/

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	
	int n;
	int i;
	int x;
	int j;
	int flag;
	int a[20];
	flag=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("�������ѯ����:");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(x==a[i])
		{
			j=i;
			flag=1;
		}
	}
	printf("��ѯ���Ϊ:");
	if(flag==1)
		printf("x�������У�����С�±�Ϊ%d",j);
	else
		printf("Not Found!");
	system("pause");
	return 0;
}