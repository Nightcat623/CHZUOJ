#include <stdio.h>
#define MAXN 10
void sort( int a[], int n );
int main() {
	int i, n;
	int a[MAXN];

	scanf("%d", &n);
	for( i=0; i<n; i++ )
		scanf("%d", &a[i]);

	sort(a, n);

	printf("After sorted the array is:");
	for( i = 0; i < n; i++ )
		printf(" %d", a[i]);
	printf("\n");

	return 0;
}
void sort( int a[], int n ) {
	int temp,k,i,small;
		for(i=0; i<n-1; i++) {
			temp=i;
			for(k=i+1;k<n;k++){
				if(a[k]<a[temp]) temp=k;
				small=a[temp];
				a[temp]=a[i];
				a[i]=small;	
				}
		} 
}
