#include <stdio.h>

int main() {
    int a[10], i, j, min, t;

    // ����10������
    printf("������10��������\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    // ѡ������
    for(i = 0; i < 10; i++) {
        min = i;
        for(j = i + 1; j < 10; j++) {
            if(a[min] > a[j]) min = j;
        }
        t = a[i];
        a[i] = a[min];
        a[min] = t;
    }

    // ���������
    printf("�����Ľ��Ϊ��\n");
    for(i = 0; i < 10; i++) {
        printf("%3d", a[i]);
    }
    printf("\n");

    return 0;
}

