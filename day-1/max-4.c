#include<stdio.h>
main(){
	
	
	int a =10000, b= 2000, c=300, d=40;
	
	if(a>b){
		if(a>c){
			if(a>d){
				printf("a is max");
			}
			else{
				printf("d is max");	
			}
		}
	    else{
		    if(c>d){
				printf("c is max");
			}
		    else{
				printf("d is max");
			}
		}
	}else{
		if(b>c){
			if(b>d){
				printf("b is max");
			}
			else{
				printf("d is max");	
			}
		}
		else{
			if(c>d){
				printf("c is max");
			}
			else{
				printf("d is max");
			}
		}	
	}
	
}