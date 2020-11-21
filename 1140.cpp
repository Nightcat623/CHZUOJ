#include<stdio.h>
int fac(int a){
	if(a==1) return 1;
	return a*fac(a-1);
}
void sum(int b){
	int sum=0;
	for(int i=1;i<=b;i++)
	{
		sum+=fac(i);
	}
	printf("s=%d",sum); 
}
int main()
{
	int m;
	scanf("%d",&m);
	sum(m);
	return 0;
}
