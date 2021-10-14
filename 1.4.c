#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void change(char *p, char a, char b){
	for(int i = 0; i < strlen(p); i++){
		if(p[i] == a){
			p[i] = b;
		}
	}
}
int main() {
	char s[30], a, b;
	printf("Nhap chuoi ki tu: ");
	scanf("%[^\n]%*c", s);
	printf("Nhap ki tu can thay: ");
	scanf("%c", &a);
	printf("Nhap ki tu can the: ");
	scanf(" %c", &b);
	change(s, a, b);
	printf("%s\n", s);
	return 0;
}
