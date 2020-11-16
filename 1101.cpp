#include <stdio.h>
#include <math.h>
double funcos( double e, double x );
int main()
{   
    double e, x;
    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));
    return 0;
}
double funcos( double e, double x ){
	double jc=0,eps=1,sum,cos=0,f=0;
	for(int i=1;fabs(eps)>=e;i++) {
		sum=1;
		for(double g=1;g<=f;g++){
			sum*=g;
		}
		eps=pow(x,f)/sum*pow(-1,(i-1));
		cos+=eps;
		f+=2;
	}
	return cos;
}
