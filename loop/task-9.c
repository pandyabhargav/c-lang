
#include <stdio.h>

main()
{
    int n,i,f;

    f=i=1;

    printf("Enter a Number to Find Factorial:");
    scanf("%d",&n);


    while(i<=n)
    {
        f*=i;
        i++;
    }

    printf("\n\nThe Factorial of %d is : %d ",n,f);

}