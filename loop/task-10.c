#include <stdio.h>

main()  
{  
    int n, cou = 1;  

    printf("Enter a number\n");  
    scanf("%d", &n);  

    printf("\n Multiplication table for %d is:\n\n", n);  
    while(cou <= 10)  
    {  
        printf("%d x %d = %d\n", n, cou, (n* cou));  
        cou++;  
    }  

}  