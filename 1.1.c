#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n;
	printf("Nhap so phan tu cua day: ");
	scanf("%d", &n);
	int a[n];
	double sum = 0.0, avg, mindiff;
	for(int i = 0; i < n; i++){
		printf("Nhap phan tu so %d: ", i + 1);
		scanf("%d", &a[i]);     
		sum = sum + a[i]; 
	}
	avg = sum / n;
	mindiff = fabs(a[0] - avg);
	for(int i = 1; i < n; i++){
		if(mindiff > fabs(a[i] - avg)){
			mindiff = fabs(a[i] - avg);
		}
	}
	for(int i = 0; i < n; i++){
		if(fabs(a[i] - avg) == mindiff){
			printf("%d (a[%d])  ", a[i], i);
		}
	}
	printf("\n");
	return 0;
}
