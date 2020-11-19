#include <stdio.h>

double calc_pow( double x, int n );

int main()
{
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    printf("%.0f\n", calc_pow(x, n));

    return 0;
}
double calc_pow( double x, int n ){
	double m=1;
	if(n==1) m=x;
	else m=x*calc_pow(x,n-1);
	return m;
}
