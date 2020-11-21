#include<stdio.h>
#define PI 3.14
void area(double x){
	double area=x*x*PI;
	printf("area=%.2lf",area);
}
void perimeter(double x){
	double per=2*x*PI;
	printf("perimeter=%.2lf",per);
}
int main(){
	double n;
	scanf("%lf",&n);
	area(n);
	printf(", ");
	perimeter(n);
	return 0;
}
