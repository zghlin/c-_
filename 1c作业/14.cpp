#include <stdio.h>
#include <string.h>
#define N 80

int main() {
    char s1[N], s2[N];
    int i, res = 0;

    printf("�������ַ���s1��\n");
    fgets(s1, N, stdin);  // ʹ��fgets����gets
    s1[strcspn(s1, "\n")] = '\0';  // ȥ�����з�

    printf("�������ַ���s2��\n");
    fgets(s2, N, stdin);  // ʹ��fgets����gets
    s2[strcspn(s2, "\n")] = '\0';  // ȥ�����з�

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
