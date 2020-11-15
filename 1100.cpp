#include <stdio.h>
int narcissistic( int number );
void PrintN( int m, int n );
int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
	PrintN(m, n);
	if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);
	return 0;
}
int narcissistic( int number ) {
	int k,a,sum=0;
	k=number;
	while(k) {
		a=k%10;
		k=k/10;
		sum+=a*a*a;
	}
	if(sum==number) {
		return 1;
	} else {
		return 0;
	}
}
void PrintN( int m, int n ) {
	int sum;
	for(int i=m+1; i<n; i++) {
		sum=0;
		int k=i,a;
		while(k) {
			a=k%10;
			k=k/10;
			sum+=a*a*a;
		}
		if(sum==i) printf("%d\n",sum);

	}
}


