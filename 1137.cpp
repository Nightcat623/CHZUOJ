#include<stdio.h>
int he(int x){
	int sum;
	if(x==1) sum=1;
	else sum=x+he(x-1);
	return sum;
}
int main(){
	printf("sum=%d",he(100));
	return 0;
}
