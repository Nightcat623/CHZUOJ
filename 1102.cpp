#include <stdio.h>
#include <math.h>

int IsSquare(int n);

int main(){
    int n;
    scanf("%d", &n);
    if (IsSquare(n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}
int IsSquare(int n){
	int g;
	for(int i=0;i*i<=n;i++){//考虑i=0以及i=1的情况 
		g=pow(i,2);
		if(g==n) return 1;
	}
	return 0;
}

