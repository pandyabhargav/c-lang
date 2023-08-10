#include<stdio.h>
main(){
	int row, col, space;
	for(row = 5; row>=1;row--){
		
		for(col = row; col>=1; col--){
		printf("   ");
		}
		
		for(col = 5; col>=row; col--){
		printf(" %d ", row);
		}
		
		printf("\n");
	}
}