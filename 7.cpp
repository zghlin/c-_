/*
	ѡ����������һ��������n��1<=n<=10��
	������n����������ѡ�����򷨽�����С����������������
	������ѭ��
	�����������������
*/
#include<stdio.h>
#include<stdlib.h>
#define maxn 10   //������ų���maxn
int main(void)
{
	int i;
	int index;
	int k;
	int n;
	int temp;
	int a[maxn];
	printf("enter n:");  //������ʾ����n
	scanf("%d",&n);
	printf("enter %d integers:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);    // �����������θ�������a��n��Ԫ��
	}
//  ��n������������
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
	//  ���n������Ԫ�ص�ֵ
	printf("After sorted:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}

