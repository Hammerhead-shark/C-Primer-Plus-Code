#include<stdio.h>
int main()
{
	float const change=2.54;//1Ӣ��=2.54���� 
	printf("Please enter your height(inches):");
	float height=0;//Ӣ����Ϊ��λ
	float cm=0;
	scanf("%f",&height);
	cm=height*change;
	printf("Your height is:%gcm",cm); 
	return 0;
}
