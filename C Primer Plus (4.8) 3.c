#include<stdio.h>
int main()
{
	float num=0;
	
	printf("Please enter a floating-point number:");
	scanf("%f",&num);
	printf("a:The input is %.1f or %.1e.\n",num,num);
	printf("b:The input is %+.3f or %.3E.",num,num);
	
	return 0;
}
/*
İ”³ö˜ÓÀı

Please enter a floating-point number:26.87
a:The input is 26.9 or 2.7e+001.
b:The input is +26.870 or 2.687E+001. 

*/
