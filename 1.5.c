#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
	char s[100];
	int count = 0;
	scanf("%[^\n]%*c", s);
	char *p[10];
	for(int i = 0; i < strlen(s); ++i){
		if(!isalpha(s[i])){
			s[i] = '\0';
		}
	}
	for(int i = 0; i < strlen(s); ++i){
		if(isalpha(s[i])){
			p[count] = s + i;
			i += strlen(s + i);
			count++;
		}
	}
	for(int i = count - 1; i >= 0; --i){
		printf("%s\n", p[i]);
	}
	return 0;
}
