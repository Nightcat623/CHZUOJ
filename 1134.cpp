#include<stdio.h>
#include<math.h>
int isPPDI(int x);
int main()
{
    int x, result;
    scanf("%d", &x);
    result = isPPDI(x);
    if (result == 1) {
        printf("%d是水仙花数！", x);
    } else {
        printf("%d不是水仙花数！", x);
    }
}
int isPPDI(int x){
	if(x==1||x==1) return 0;
	int sum=0,k=x,a;
	while(k){
		a=k%10;
		k=k/10;
		sum+=pow(a,3);
	}
	if(sum==x) return 1;
	else return 0;
}
