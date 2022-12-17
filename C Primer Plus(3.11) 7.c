#include<stdio.h>
int main()
{
	float const change=2.54;//1英寸=2.54厘米 
	printf("Please enter your height(inches):");
	float height=0;//英寸作为单位
	float cm=0;
	scanf("%f",&height);
	cm=height*change;
	printf("Your height is:%gcm",cm); 
	return 0;
}
