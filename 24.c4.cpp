#include<stdio.h>
//  Write C program to find sum of first and last digit of a number.
main()
{
	int n,sum=0,FD,LD;
    printf("Enter no.to find first and last digit= ");
    scanf("%d",&n);
    
    LD=n%10;
    
    while(n>=10)
    {
    	n=n/10;
	}
	FD=n;
	
	sum=FD+LD;
	
	printf("sum is=%d\n",sum);
}
