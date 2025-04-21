#include <stdio.h>
#define N 10
 
int main() {
	int a[N][N] = {0}, n, i = 0, j, k = 1;
	
	printf("请输入n的值(1~9的奇数)：");
	scanf("%d", &n);
	while(n < 1 || n > 9 || n % 2 == 0) {
		printf("\n输入有误，请重新输入(1~9的奇数)：");
		scanf("%d", &n);
	}
	
	j = n / 2;
	a[i][j] = k;
	
	while(k <= n * n) {
		i--;
		j++;
		k++;
		
		if(i < 0 && j >= n) {
			i += 2;
			j--;
		} else if(i < 0) {
			i = n - 1;
		} else if(j >= n) {
			j = 0;
		}
		
		if(a[i][j] == 0) {	
			a[i][j] = k;
		} else {
			i += 2;
			j--;
			a[i][j] = k;
		}
	}
	
	for(i = 0; i < n; i++) {
		for(j = 0; j < n; j++) {
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}