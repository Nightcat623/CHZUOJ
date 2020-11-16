#include <stdio.h>
int fn( int a, int n );
int SumA( int a, int n );int main()
{
    int a, n;
    scanf("%d %d", &a, &n);
    printf("fn(%d, %d) = %d\n", a, n, fn(a,n));
    printf("s = %d\n", SumA(a,n));
    return 0;
}
int fn( int a, int n ){
	int sum=0;
	for(int i=1;i<=n;i++){
		sum*=10;
		sum+=a;
	}
	return sum;
}
int SumA( int a, int n ){
	int he=0;
	for(int i=1;i<=n;i++){
		he+=fn(a,i);
	}
	return he;
}
