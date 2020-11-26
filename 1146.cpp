#include<stdio.h> 
int main(){
	int n,i;
	scanf("%d\n",&n);
	int a[n];
	for(i=n;i>0;--i)
	scanf("%d ",&a[i]);
	for(i=1;i<=n;i++){
		printf("%d ",a[i]);
	} 
	return 0;
}//使用ctrl+z停止程序 
