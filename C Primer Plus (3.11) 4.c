#include<stdio.h>
int main()
{
	float num=0;
	printf("Enter a floating-point value:");
	scanf("%f",&num);
	printf("fixed-pointed notation:%f\n",num);
	printf("exponential notation:%e\n",num);
	printf("p notation:%a",num); 
	return 0;
 } 
