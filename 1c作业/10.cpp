#include <stdio.h>
#include <string.h>
#define M 3
#define N 80
 
int main() {
	char a[M][N] = {"", "", ""};
	int i, j, b[15] = {0};
	
	printf("ÇëÊäÈë3¸ö×Ö·û´®£º\n");
	for(i = 0; i < 3; i++) {
		gets(a[i]);
	}
	
	for(i = 0; i < M; i++) {
		for(j = 0; j < strlen(a[i]); j++) {
			if(a[i][j] >= 'A' && a[i][j] <= 'Z') b[i]++;
			else if(a[i][j] >= 'a' && a[i][j] <= 'z') b[i + 3]++;
			else if(a[i][j] >= '0' && a[i][j] <= '9') b[i + 6]++;
			else if(a[i][j] == ' ')	b[i + 9]++;
			else b[i + 12]++;
		}
	}
	
	for(i = 0; i < M; i++) {
		printf("\n×Ö·û´®%d£º%s\n", i + 1, a[i]);
		printf("´óĞ´×ÖÄ¸\tĞ¡Ğ´×ÖÄ¸\tÊı×Ö\t\t¿Õ¸ñ\t\tÆäËû\n", a[i]);
		for(j = 0; j < 15; j += 3) {
			printf("%4d\t\t", b[j + i]);
		}
		printf("\n\n");
	}
	
	return 0;
}
