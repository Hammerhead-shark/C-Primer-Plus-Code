#include<stdio.h>
int main()
{
	unsigned width,precision;
	int number=256;
	float weight=242.5;
	
	printf("Enter a field width:\n");
	scanf("%d",&width);
	printf("The number is :%*d:\n",width,number);/*width£º×Ö¶ÎŒ’¶È*/
	printf("Now enter a width and a precision:\n");
	scanf("%d %d",&width,&precision);
	printf("Wight = %*.*f\n",width,precision,weight);
	printf("Done!\n");
	
	return 0;
 } 
