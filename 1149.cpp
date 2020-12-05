#include<stdio.h>
int main(){
	int m,n,a[6][6];
	int t;
	scanf("%d %d",&m,&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	 } 
	m=m%n;
	 for(int i=0;i<n;i++)
	 {
	 	for(int j=0;j<n;j++)
	 		printf("%d ",a[i][(n-m+j)%n]);
	 	printf("\n");
	 }
	 


return 0;
}
