#include<stdio.h>
int main()
{
	short age;
	int days;
	printf("Please enter your age:");
	scanf("%d",&age);
	days=age*365;
	printf("Your age is %d.\nYour age is converted to %d days.",age,days);
	return 0; 
}
