#include<stdio.h>
int main()
{
	const int change=950;/*1����=950��*/ 
	float water=0;/*��λ�ǿ���*/
	float sum=0,numwater=0; 
	printf("Please enter quarts of water:________\b\b\b\b\b\b\b\b");
	scanf("%f",&water);
	sum=water*change;
	numwater=sum/3.0e-23;
	printf("The total number of water molecules is:%g",numwater);
	return 0;
}
