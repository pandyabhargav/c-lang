#include<stdio.h>
main(){
	int row, col, space;
	for(row = 1; row<=5;row++){
		
		for(col = 4; col>=row; col--){
		printf("   ");
		}
		
		for(col = 1; col<=row; col++){
		printf(" %d ", row);
		}
		
		printf("\n");
	}
}