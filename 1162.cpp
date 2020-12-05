#include<stdio.h>
int main(){
	int n;
	int a[4],b[4];
	scanf("%d",&n);
	int i,j,t;
	for(i=3;i>=0;i--){
		a[i]=n%10;
		n=n/10;
	}
	for(i=0;i<4;i++){
		b[i]=(a[i]+9)%10;
	}
	i=0;j=2;
	while(j>0){
		t=b[i];
		b[i]=b[j];
		b[j]=t;
		i+=3;
		j--;
	}
	printf("The encrypted number is ");
	for(i=0;i<4;i++)
	printf("%d",b[i]);
	


return 0;
}
