#include <stdio.h>
double fact( int n );
double factsum( int n );
int main() {
	int n;
	scanf("%d",&n);
	printf("fact(%d) = %.0f\n", n, fact(n));
	printf("sum = %.0f\n", factsum(n));
	return 0;
}
double fact( int n ){
	double x,jc;
	if(n==0) jc=1;
	 else jc=n*fact(n-1);
	return jc;
}
double factsum( int n ){
	double sum;
	for(int i=1;i<=n;i++){
	sum+=fact(i);}
	return sum;
	}
