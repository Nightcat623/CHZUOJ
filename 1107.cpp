#include <stdio.h>
int fib( int n );
void PrintFN( int m, int n );
int main()
{
    int m, n, t;
    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);
    return 0;
}
int fib( int n ){
	int x;
	if(n==1||n==2) x=1;
	else x=fib(n-2)+fib(n-1);
	return x;
}
void PrintFN( int m, int n ){
	int pd=0,count=0;
	for(int i=1;fib(i)<=n;i++){
		if(fib(i)>=m&&fib(i)<=n){
			pd=1;
			count++;
			if(count==1){
				printf("%d",fib(i));
				continue;
			}
			printf(" %d",fib(i));
		}
	}
	if(!pd)
	printf("No Fibonacci number");
}
