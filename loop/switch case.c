//switch case (multiple choice)
#include<stdio.h>
main()
{
	int ch,r,no1,no2,t;
	float pie=3.14,ans;
	
	printf("press1 for area of circle program..!!\n");
	printf("press2 for swapping number..!!\n\n");
	
	printf("enter tha choice:");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			printf("enter the value:");
			scanf("%d",&r);
			ans=pie*r*r;
			
			printf("area of circle is :%f,ans");
			break;
			
		case 2:
			printf("value is: %d\n",no1);
			printf("value is: %d",no2);
			break;
		
		defautf:
			printf("wrong choice...!!");
	}
}