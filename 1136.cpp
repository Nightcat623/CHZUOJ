#include<stdio.h>
#define PI 3.14
double mianji(double x,double y){
	double area;
	area=x*x*PI*y;
	return area;
}
int main(){
	double x,y;
	scanf("%lf %lf",&x,&y);
	printf("%.3lf",mianji(x,y));
	return 0;
}
