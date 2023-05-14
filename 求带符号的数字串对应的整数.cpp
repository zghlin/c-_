
#include <stdio.h>
#include <string.h>
long  fun ( char *p) ;
int main()      /* 主函数 */
{ char s[6];
  long    n;
 scanf("%s",  s) ;
  n=fun(s);
  printf("%ld",n);
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