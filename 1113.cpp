#include <stdio.h>
#include <math.h>
int search( int n );
int main() {
	int number;

	scanf("%d",&number);
	printf("count=%d\n",search(number));

	return 0;
}
int search( int n ) {
	int a,b,c,count=0;
	for(int g=101; g<=n; g++) {
		a=g%10;
		b=g/10%10;
		c=g/100;
		if(a==b||b==c||c==a) {
			for(int i=1; i<=sqrt(g); i++) {
				if(pow(i,2)==g)
					count++;
			}
		}
	}
	return count;
}

