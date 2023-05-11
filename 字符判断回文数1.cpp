#include "stdio.h"

#include "string.h"
#include "stdlib.h"


int f(char *s)

{int i,j;

j=strlen(s);

j--;

for(i=0;i<j&&s[i]==s[j];i++,j--);

if(i>=j)

   return 1;
return 0;

}


main()

{char s[80];

gets(s);

if(f(s)==1)

   printf("YES\n");

else

   printf("NO\n");
system("pause");
}