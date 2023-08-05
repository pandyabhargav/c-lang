#include<stdio.h>
main(){
	
	int  n = 2, sum;
	
	printf("enter the number ");
	scanf("%d", &sum);
	
	
	while(n <= sum ){
		
		printf("%d\n", sum);
		sum = sum - 2;
     	
	}
	
}