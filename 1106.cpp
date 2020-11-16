#include <stdio.h>
int factorsum( int number );
void PrintPN( int m, int n );
int main() {
	int i, m, n;
	scanf("%d %d", &m, &n);
	if ( factorsum(m) == m ) printf("%d is a perfect number\n", m);
	if ( factorsum(n) == n ) printf("%d is a perfect number\n", n);
	PrintPN(m, n);
	return 0;
}
int factorsum( int number ) {
	int sum=1;
	for(int i=2; i<number; i++) {
		if(number%i==0) {
			sum+=i;
		}
	}
	return sum;
}
void PrintPN( int m, int n ) {
	int pd=0;
	for(int i=m; i<=n; i++) {
		if(factorsum(i)==i){
		pd=1;
		printf("%d = 1",i);	
			for(int g=2;g<i;g++){
				if(i%g==0){
					printf(" + %d",g);
				}
			}
				printf("\n");
		}
	
	}
	if(pd==0){
		printf("No perfect number\n");
	}
	
}
