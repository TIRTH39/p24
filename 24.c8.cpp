#include<stdio.h>
// Program Check weather num is prime or not
main()
{
	int n,i,c=0;
    printf("Enter any number n:");
    scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
	    if (n%i==0) 
        c++;
	}
	
	if(c==2)
	{
		printf("n is an prime no.");
	}
	else
	{
		printf("n is not prime no.");
	}
}
