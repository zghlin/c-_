#include <stdio.h>
 
int main() {
	int a[100] = {0}, i, j;
	
	for(i = 0; i < 100; i++)	a[i] = i + 1;
	
	for(i = 2; i < 100; i++) {
		
		for(j = 2; j < a[i]; j++) {
			if(a[i] % j == 0)	break;
		}
		
		if(j >= a[i]) {
			printf("%4d", a[i]);
		}
	}
	
	return 0;
}