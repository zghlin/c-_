/*
����ͬ�����й��Ŵ�����ѧ����֮һ�� ��Լ��1500��ǰ���������㾭���оͼ����������Ȥ�����⡣���������������ģ�
��������ͬ����������ʮ��ͷ�����о�ʮ���㣬�����ø����Σ����ľ仰����˼�ǣ�
������ֻ����ͬ��һ�������������������35��ͷ��������������94ֻ�š������и��ж���ֻ�����ã�
����Ҫ���д����������ָ����������⼦��ͬ�����⡣ͷ�ͽŵ���Ŀ�Ӽ������롣
�����ӿڶ��壺
void  fun ( int h,int f,int *p,int *q );
����h��f�����������룬����ͷ�ͽŵ���Ŀ�� (�ٶ��������ݶ�����)�� ����fun����������õ���Ŀ�����������������

����������
35 94
���������
cocks=23,rabbits=12
���볤������
16 KB
ʱ������
400 ms
�ڴ�����
64 MB
*/

//������������������ý��в��Ե����ӡ����磺
#include <stdio.h>

void  fun ( int h,int f,int *p,int *q );

int main()
{
  int h,f,x,y ;
  scanf("%d%d", &h, &f);   
    fun (h ,f, &x,&y );   //x��y���������õ���Ŀ
  printf("cocks=%d,rabbits=%d", x,y);
  return 0;
}

/* ����д�Ĵ��뽫Ƕ�����ע������д��������ֻ�����fun�����  */
//��д�ĺ������֣�
void  fun ( int h,int f,int *p,int *q )
{
    * p=(4*h-f)/2;
    * q=h-* p;
}




