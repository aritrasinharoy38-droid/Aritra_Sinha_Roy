// Write a program to find the sum of the digits of a whole number//
#include<stdio.h>
int main()
{
	int i=1,n,r,s=0;
	printf("Enter the number; ");
	scanf("%d",&n);
	while(i<=n)
	{
		r=n%10;
		s=s+r;
		n=n/10;
	}
	printf("sum of the number%d", s);
	return 0;
	
}

