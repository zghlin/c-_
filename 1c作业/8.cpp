#include <stdio.h>
#define M 4
#define N 5

int main() {
    int a[M][N];
    int i, j, k, max, min, flag = 0;

    printf("������һ�� %d��%d �Ķ�ά���飨�� %d ����������\n", M, N, M * N);
    for(i = 0; i < M; i++) {
        for(j = 0; j < N; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < M; i++) {
        max = a[i][0];
        k = 0;
        for(j = 1; j < N; j++) {
            if(max < a[i][j]) {
                max = a[i][j];
                k = j;
            }
        }

        min = max;
        for(j = 0; j < M; j++) {
            if(min > a[j][k])
                min = a[j][k];
        }

        if(max == min) {
            flag = 1;
            break;
        }
    }

    if(flag == 1) {
        printf("�ҵ����㣺%d\n", max);
    } else {
        printf("�ް���\n");
    }

    return 0;
}

