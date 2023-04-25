#include<stdio.h>
// Write C program to count number of digits in a number.
main()
{
	int n,c=0;
	printf("Enter any number=");
	scanf("%d",&n);
	
	 while(n!=0)
	 {
	 	n=n/10;
	 	c++;
	 }
	   printf("\n The number of digits is : %d",c);  
}
