#include <stdio.h>
//四种运算符的优先级相同  题说 优先级相同 
int main()
{
    int y,x;
    char op;
    //没有空格，且至少有一个操作数。可以先读入一个数字；将前一个运算的结果当作Y
	int i=0;//判断是否出错 
	 
    scanf("%d",&y);
	while(op!='=') {
		op=getchar();
		if(op=='='){
			break;
		}
		scanf("%d",&x);
		if(op=='+'||op=='-'||op=='*'||op=='/'){
			if(op=='+'){
				y=y+x;
			}else if(op=='-'){
				y=y-x;
			}else if(op=='*'){
				y=y*x;
			}else if(op=='/'){
				if(x==0){
					printf("ERROR")	;
					i++;	
				}else{
					y=y/x;
				}	
			}	
		}else{
			printf("ERROR")	;
			i++;
		}
	}
	
	if(i==0){
		printf("%d",y);
	}
 
    return 0;
}
