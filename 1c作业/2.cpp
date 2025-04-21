#include <stdio.h>

int main() {
    int a[10], i, j, min, t;

    // 输入10个整数
    printf("请输入10个整数：\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    // 选择排序
    for(i = 0; i < 10; i++) {
        min = i;
        for(j = i + 1; j < 10; j++) {
            if(a[min] > a[j]) min = j;
        }
        t = a[i];
        a[i] = a[min];
        a[min] = t;
    }

    // 输出排序结果
    printf("排序后的结果为：\n");
    for(i = 0; i < 10; i++) {
        printf("%3d", a[i]);
    }
    printf("\n");

    return 0;
}

