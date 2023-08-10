#include<stdio.h>
main(){
	int row, col, space;
	for(row = 5; row>= 1;row--){
		
		for(col = 4; col>=row; col--){
		printf("   ");
		}
		
		for(col = 1; col<=row; col++){
		printf(" %d ", col);
		}
		
		printf("\n");
	}
}