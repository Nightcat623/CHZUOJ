#include<stdio.h>
int main(){
	int n=0;
	char a[30];
	while((a[n]=getchar())!='#'){
		if(a[n]>='a'&&a[n]<='z') a[n]=a[n]-32;
		else if(a[n]>='A'&&a[n]<='Z') a[n]=a[n]+32;
		n++;
	}
	for(int i=0;i<n;i++)
	printf("%c",a[i]);

return 0;
}
