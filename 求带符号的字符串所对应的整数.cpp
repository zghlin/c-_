/*
6-3 �ַ��������ַ�����������ŵ����ִ���Ӧ������
���дһ������fun�����Ĺ����ǣ���һ�������ַ���ת��Ϊһ������(���õ���C�����ṩ�Ľ��ַ���ת��Ϊ�����ĺ���)��
���磬�������ַ���"-1234"����������ת��Ϊ����ֵ -1234�� �������ڴ�����д������main�� ������ɺ���fun��begin��end֮��Ӧ����д
�Ĵ��롣��

*/

#include <stdio.h>
#include<stdlib.h>
#include <string.h>
long  fun ( char *p);
int main()      /* ������ */
{ char s[6];
  long    n;
 scanf("%s",  s) ;
 n=fun(s);
 printf("%ld\n",n);
 system("pause");
 return 0;
 }

/* ���������д�Ĵ��뽫��Ƕ�뵽���� */
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
