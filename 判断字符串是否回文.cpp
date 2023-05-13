#define MAXN 30
#include "string.h"
#include "stdio.h"
int fun(int s[]);                // 代码有点问题
int main(void)
{
    int k;
    char line[MAXN];
    k=0;
    while((line[k] = getchar()) != '\n'){
        k++;
    }
    line[k] = '\0';
    if( fun(line)==1)   /* 判断line是否回文串，返回真代表是回文 */
        printf("It is a plalindrome\n");
    else printf("It is not a plalindrome\n");
    return 0;
}    

/* 请在这里填写答案 */
}
int fun(char s[])
{
    int i,j;
    j=strlen(s);
    j--;
    for(i=0;i<j&&s[i]==s[j];i++,j--);
    
        if(i>=j)
            return 1;
        return 0;
    
}