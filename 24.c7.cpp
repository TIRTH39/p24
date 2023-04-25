#include<stdio.h>
// Write C program print out Fibonacci series. (0,1,1,2,3,5,8…)
main()
{
	int n1=0,n2=1,n3,r,n;
	printf("enter value=");
	scanf("%d",&n);
	printf("\n%d %d",n1,n2);
	
	for(r=2;r<=n;r++)
	{
		n3=n1+n2;
		printf("%d,",n3);
		n1=n2;
		n2=n3;
	}
}
