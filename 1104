#include <stdio.h>
int gcd(int x, int y);
int main(void) {
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d\n", gcd(x, y));
	return 0;
}
int gcd(int x, int y) {
	int i;
	for(i=x; i>=1; i--) {
		if(x%i==0&&y%i==0)
			break;
	}
	return i;
}
