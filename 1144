#include<stdio.h>
int main(){
	char word[1001];
	int i=0,couts=0; 
	gets(word);
	while(word[i]==32){//跳过开头空格 
		i++;
	}
	while(word[i]!='\0'){
		if(word[i]!=32){
			couts++;
			while(word[i]!=32){//跳过整个字符 
				if(word[i]=='\0'){
					 break;//判断句子是否结束 
				}
				i++;
			}		
		}
		else{
			while(word[i]==32)//跳过多余空格 
			i++;
		} 
	}
	printf("%d",couts);
	

return 0;
}

