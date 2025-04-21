#include <stdio.h>

int main() {
    int a[3][3];
    int i, j, sum = 0;

    printf("请输入一个 3x3 的矩阵（共 9 个整数）：\n");

    // 输入矩阵
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // 计算主对角线元素之和
    for(i = 0; i < 3; i++) {
        sum += a[i][i];
    }

    printf("主对角线元素之和 sum = %d\n", sum);

    return 0;
}

