#include<stdio.h>
#define y(x) x*x
int main(){
	int sum=0;
	for(int i=1;i<=10;i++){
		if(i==10) printf("%d*%d=",i,i);
		else printf("%d*%d+",i,i);
		sum+=y(i);
	}
	printf("%d",sum);
	return 0;
}
