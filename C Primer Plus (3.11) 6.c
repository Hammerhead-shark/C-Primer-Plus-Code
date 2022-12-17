#include<stdio.h>
int main()
{
	const int change=950;/*1夸脱=950克*/ 
	float water=0;/*单位是夸脱*/
	float sum=0,numwater=0; 
	printf("Please enter quarts of water:________\b\b\b\b\b\b\b\b");
	scanf("%f",&water);
	sum=water*change;
	numwater=sum/3.0e-23;
	printf("The total number of water molecules is:%g",numwater);
	return 0;
}
