#include <stdio.h>
#include <stdlib.h>

void split(double c, int *x, double *y){
	*x = (int)c;
	*y = c - (int)c;
}
int main() {
	double t, b;
	int a;
	printf("Nhap so: ");
	scanf("%lf", &t);
	split(t, &a, &b);
	printf("%lf %d %lf", t, a, b);
	return 0;
}
