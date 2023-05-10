/*1 计算年year、月month和日day对应的是该年的第几天
自定义1个函数day_of_year(year, month, day)，计算并返回年year、月month和日day对应的是该年的第几天。
函数接口定义：
int day_of_year(year, month, day);
year, month, day分别为输入的年，月，日


*/
//裁判测试程序样例：
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

/* 请在这里填写答案 */
//这是我写的函数:
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
