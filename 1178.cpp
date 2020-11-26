#include<stdio.h>
int main(){
	double s[10];
	double average,sum=0;
	int i=0;
	while(i<10){
		scanf("%lf",&s[i]);
		sum+=s[i];
		i++;
	}
	average=sum/10;
	printf("平均值为:%.1lf\n",average);
	printf("小于平均值的数:");
	for(int k=0;k<10;k++){
		if(s[k]<average)
		printf("%.1lf ",s[k]);
	}
	return 0;
} 
