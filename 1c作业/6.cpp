#include <stdio.h>
#define N 10
 
int main() {
	int a[N][N] = {0}, i, j;
	
	for(i = 0; i < N; i++) {
		a[i][0] = 1;
		a[i][i] = 1;
		for(j = 1; j < i; j++) {
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	
	for(i = 0; i < N; i++) {
		for(j = 0; j <= i; j++) {
			printf("%6d", a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
