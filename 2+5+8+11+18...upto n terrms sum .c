// 2+5+8+11+14+...upto n terms. W.C.P to calculate sum of the given series//
#include<stdio.h>
int main()
{
	int n;
	int i=1;
	int term=2;
	int sum=0;
	printf("enter the number of term:");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+term;
		term=term+3;
		i++;
	}
	printf("Sum of the series=%d",sum);
}
