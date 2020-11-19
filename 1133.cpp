#include<stdio.h>
int s=1;//定义全局变量以对应步数改变 
int jump(int n,char x, char y){
	printf("第%d步:将%d号盘子从%c--->%c\n",s,n,x,y);
	s++;
}
void step(int n,char x,char y,char z){
	if(n==1) jump(n,x,z);
	else {
		step(n-1,x,z,y);
		jump(n,x,z);
		step(n-1,y,x,z);
	}
}
int main(){
	char x,y,z;
	x='A';
	y='B';
	z='C';
	step(3,x,y,z);
}
