#include<stdio.h>
main()
{
	char ch;
	
	printf("enter the value:");
	scanf("%c",&ch);
	
	if(ch>= 'A'&& ch <='Z'  || ch >='a' && ch <= 'z')
	{
		printf("value is character..!!");
	}
	else if(ch >='0' && ch <='9')
	{
		printf("value is digit..!!");
	}
	else
	{
		printf("special operator..!!");
	}
}