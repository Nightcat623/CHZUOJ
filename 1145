#include<stdio.h>
int main() {
	int temp,i,n,k,flag;
	scanf("%d",&n);
	int a[n];
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);
	temp=a[0];
	flag=0;
	for(k=1; k<n; k++) {

		if(temp>=a[k])
			continue;
		else {
			temp=a[k];
			flag=k;
		}
	}
	printf("%d %d",temp,flag);
	return 0;
}
