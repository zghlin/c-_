#include <stdio.h>
#define N 15

int main() {
    int a[N];
    int l = 0, r = N - 1, mid, num, flag = 0;
    int i;

    printf("������ %d �����Ӵ�С�����������\n", N);
    for(i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    printf("������Ҫ���ҵ�ֵ��");
    scanf("%d", &num);

    // �������еĶ��ֲ���
    while(l <= r) {
        mid = (l + r) / 2;
        if(a[mid] == num) {
            flag = 1;
            printf("a[%d] = %d\n", mid, num);
            break;
        } else if(a[mid] > num) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    if(flag == 0) {
        printf("�޴���\n");
    }

    return 0;
}

