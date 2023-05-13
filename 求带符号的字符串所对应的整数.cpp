/*
6-3 字符数组与字符串：求带符号的数字串对应的整数
请编写一个函数fun，它的功能是：将一个数字字符串转换为一个整数(不得调用C语言提供的将字符串转换为整数的函数)。
例如，若输入字符串"-1234"，则函数把它转换为整数值 -1234。 （请勿在答题框编写主函数main， 仅需完成函数fun的begin和end之间应该填写
的代码。）

*/

#include <stdio.h>
#include<stdlib.h>
#include <string.h>
long  fun ( char *p);
int main()      /* 主函数 */
{ char s[6];
  long    n;
 scanf("%s",  s) ;
 n=fun(s);
 printf("%ld\n",n);
 system("pause");
 return 0;
 }

/* 答题框所填写的代码将被嵌入到这里 */
long fun(char *p) {
  long value = 0;
  int sign = 1, i = 0;
  if (p[0] == '-') {
    sign = -1;
    i = 1;
  }
  while (p[i] != '\0') {
    value = value * 10 + (p[i] - '0');
    ++i;
  }
  value *= sign;
  return value;
}
