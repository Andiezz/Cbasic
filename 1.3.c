#include <stdio.h>
#include <stdlib.h>

int check(int a[], int b[], int n){
	for(int i = 0; i < n; i++){
		if(a[i] != b[i]){
			return 0;
		}
	}
	return 1;
}

int main() {
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	int a[n], b[n];
	for(int i = 0; i < n; i++){
		printf("Nhap phan tu thu %d\n", i + 1);
		printf("cua a: ");
		scanf("%d", &a[i]);
		printf("cua b: ");
		scanf("%d", &b[i]);
	}
	printf("%d\n", check(a, b, n));
	return 0;
}
