#include <stdio.h>
#include <string.h>
#define N 80
 
int main() {
	char a[N];
	int i;
	
	printf("������Ҫ���ܵ��ַ�����\n");
	gets(a);
	
	for(i = 0; i < strlen(a); i++) {
		if(a[i] >= 'a' && a[i] <= 'z') {
			a[i] = 'z' - (a[i] - 'a');
		}
		if(a[i] >= 'A' && a[i] <= 'Z') {
			a[i] = 'Z' - (a[i] - 'A');
		}
	}
	
	printf("���ܺ�");
	puts(a);
	
	return 0;
}
