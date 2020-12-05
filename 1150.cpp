#include<stdio.h>
int main(){
	int n,y,r,feb=28;;
	scanf("%d/%d/%d",&n,&y,&r);
	if(n%4==0&&n%100!=0||n%400==0) feb=29;
	int month[12]={31,feb,31,30,31,30,31,31,30,31,30,31};
	int sum=0;
	for(int i=0;i<y-1;i++){
		sum+=month[i];
	}
	printf("%d",sum+r);


return 0;
}
