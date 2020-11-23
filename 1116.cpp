#include <stdio.h>
#include<math.h>
double fn( double x, int n );

int main() {
	double x;
	int n;

	scanf("%lf %d", &x, &n);
	printf("%.2f\n", fn(x,n));

	return 0;
}
double fn( double x, int n ) {
	int  k=1;
	if(n%2==0) k=-1;
	if(n==0) return 0;
	return k*pow(x,n)+fn(x,n-1);
}
