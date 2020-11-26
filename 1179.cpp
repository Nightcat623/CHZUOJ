#include<stdio.h>
int main() {
	int n,temp;
	scanf("%d",&n);
	getchar();
	char a[n],min;
	gets(a);
	for(int i=0; i<n-1; i++) {
			temp=i;
			for(int g=i+1; g<n; g++)
				if(a[g]<a[temp]) temp=g;
			min=a[temp];
			a[temp]=a[i];
			a[i]=min;
	}
	printf("输出排序后的数组元素：\n");
	for(int k=0; k<n; k++)
		printf("%c ",a[k]);
	return 0;
}
