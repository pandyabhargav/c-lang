#include<stdio.h>
main(){
	
	int a=100, b=200, c=300, d=400, e=500;
	
	if(a<b){
		if(a<c){
			if(a<d){
				if(a<e){
					printf("a is min");
				}
				else{
					printf("e is min");
				}
			}
			else{
				if(d<e){
					printf("d is min");
				}
				else{
					printf("e is min");
				}	
			}
		}
		else{
			if(c<d){
				if(c<e){
					printf("c is min");
				}
				else{
					printf("e is min");
				}
			}
			else{
				if(d<e){
					printf("d is min");
				}
				else{
					printf("e is min");
				}	
			}
		}
	}
	else{
		if(b<c){
			if(b<d){
				if(b<e){
					printf("b is min");
				}
				else{
					printf("e is min");
				}
			}
			else{
				if(d<e){
					printf("d is min");
				}
				else{
					printf("e is min");
				}	
			}
		}
		else{
			if(c<d){
				if(c<e){
					printf("c is min");
				}
				else{
					printf("e is min");
				}
			}
			else{
				if(d<e){
					printf("d is min");
				}
				else{
					printf("e is min");
				}	
			}
		}
	}
}