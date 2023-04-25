#include<stdio.h>
//  Write C program to print multiplication table of any number.
main()
{
	int t=1,n;
	printf("Enter value=");
	scanf("%d",&n);
	
	while(t<=10)
	{
		printf("%d*%d=%d\n",n,t,n*t);
		t++;
	}
}
