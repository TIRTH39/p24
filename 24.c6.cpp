#include<stdio.h>
// Write C program to calculate factorial of a number.
main()
{
	int n,t,fact=1;
	printf("enter value=");
	scanf("%d",&n);
	
	for(t=1;t<=n;t++)
	{
		fact=fact*t;
	}
	printf("factorial of %d=%d",n,fact);
}
