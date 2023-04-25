#include<stdio.h>
// Write C program to enter a number and print its reverse & check weather num is palindrome or not?
main()
{
	int n,reversed=0,remainder,O;
	printf("enter integer=");
	scanf("%d",&n);
	O=n;
	
	while(n!=0)
	{
		remainder=n%10;
		reversed=reversed*10+remainder;
		n/=10;
	}
	
	if(O==reversed)
	{
		printf("%d is palindrome",O);
	}
	else
	{
		printf("%d is not palindrome",O);
	}
}
