//Write a c-program which accept an integer number and print the multiplication of the digit//
#include<stdio.h>
int main() {
	int num,product=1,old_num;
	printf("Enter any number:");
	scanf("%d",&num);
	old_num=num;
	while(num>0)
	{
		product=product*num%10;
		num=num/10;
	}
	printf("Multi. of the digit %d is %d",old_num,product);
	return 0;
	
}
