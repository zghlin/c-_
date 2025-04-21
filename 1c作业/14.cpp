#include <stdio.h>
#include <string.h>
#define N 80

int main() {
    char s1[N], s2[N];
    int i, res = 0;

    printf("ÇëÊäÈë×Ö·û´®s1£º\n");
    fgets(s1, N, stdin);  // Ê¹ÓÃfgets´úÌægets
    s1[strcspn(s1, "\n")] = '\0';  // È¥µô»»ĞĞ·û

    printf("ÇëÊäÈë×Ö·û´®s2£º\n");
    fgets(s2, N, stdin);  // Ê¹ÓÃfgets´úÌægets
    s2[strcspn(s2, "\n")] = '\0';  // È¥µô»»ĞĞ·û

    for(i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) {
        if(s1[i] == s2[i]) continue;
        else if(s1[i] > s2[i]) {
            res = s1[i] - s2[i];
            break;
        } else {
            res = -(s2[i] - s1[i]);
            break;
        }
    }

    if(s1[i] != '\0') res = s1[i] - s2[i];
    else if(s2[i] != '\0') res = -(s2[i] - s1[i]);

    printf("\nres = %d", res);

    return 0;
}
