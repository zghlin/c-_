# include<stdio.h>
int main(void)
{
	int a,b,* p1,* p2,* p;
	scanf("%d%d",&a,&b);
	p1=&a;
	p2=&b;
	if(a<b){
	p=p1;
	p1=p2;
	p2=p;
	}
	printf("%d %d",* p1,* p2);
	getchar();
	getchar();
	return 0;
}
