#include <stdio.h>

int main() {
    int a[3][3];
    int i, j, sum = 0;

    printf("������һ�� 3x3 �ľ��󣨹� 9 ����������\n");

    // �������
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // �������Խ���Ԫ��֮��
    for(i = 0; i < 3; i++) {
        sum += a[i][i];
    }

    printf("���Խ���Ԫ��֮�� sum = %d\n", sum);

    return 0;
}

