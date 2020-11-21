#include<stdio.h>
#include<math.h>
double glgl(double n){
	double e=1,sum=0,g=1;
	for(int i=1;fabs(e)>=n;i++){
		e=1/g;
		g+=2;
		if(i%2==0) e=-e;
		sum+=e; 
	}
	return sum*4;	
}
int main(){
	double e;
	scanf("%lf",&e);
	printf("近似值为%.6lf",glgl(e));
	return 0;
}
