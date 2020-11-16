#include <stdio.h>
int reverse( int number );
int main() {
	int n;
	scanf("%d", &n);
	printf("%d\n", reverse(n));
	return 0;
}
int reverse(int number) {
	int sum=0,a,k=number;
	while (k){
		a=k%10;
		k=k/10;
		sum=sum*10+a;
			
	}
	return sum;
}
