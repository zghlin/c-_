/*1 ������year����month����day��Ӧ���Ǹ���ĵڼ���
�Զ���1������day_of_year(year, month, day)�����㲢������year����month����day��Ӧ���Ǹ���ĵڼ��졣
�����ӿڶ��壺
int day_of_year(year, month, day);
year, month, day�ֱ�Ϊ������꣬�£���


*/
//���в��Գ���������
#include<stdio.h> 
#include<stdlib.h>
int day_of_year(int year, int month, int day);
int main(void) 
{ 
int year,month,day; 
scanf("%d%d%d",&year,&month,&day); 
printf("%d",day_of_year(year,month,day));
system("pause");
return 0;
}

/* ����������д�� */
//������д�ĺ���:
 int day_of_year(int year,int month, int day){
  
  int sum = 0,i;
    int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int b[12] = {31,29,31,30,31,30,31,31,30,31,30,31}; 
    
    if ( year%4==0&&year%100!=0||year%400==0) { 
        for (i = 0; i < month - 1; i++) {
            sum += b[i];
        }
    }else{
        for (i = 0; i < month - 1; i++) {
            sum += a[i]; 
        }
    }
    
    sum += day;  
    return sum;
}
