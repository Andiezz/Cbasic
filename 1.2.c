#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
	char s[1000];
	int a[256] = {0}; 
	printf("Nhap xau: ");
	scanf("%[^\n]s", s);
	int max = s[0];
	for(int i = 0; i < strlen(s); i++){
		a[s[i]]++;
	}
	for(int i = 1; i < strlen(s); i++){
		if(max < s[i]){
			max = s[i];
		}
	}
	for(int i = 0; i <= max; i++){
		if(a[i] != 0 && isalpha(i)){
			printf("%c - %d\n", i, a[i]);
		}
	}
	return 0;
}
