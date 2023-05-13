#include<stdio.h> 
int day_of_year(int year, int month, int day);    //代码有点问题
int main(void) 
{ 
int year,month,day; 
scanf("%d%d%d",&year,&month,&day); 
printf("%d",day_of_year(year,month,day));
return 0;
}

/* 请在这里填写答案 */
int day_of_year(year, month, day){
  
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
