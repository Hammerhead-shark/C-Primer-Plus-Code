#include<stdio.h>
#define I_TO_F 0.08333
int main()
{
	char name[30];
	float height=0,realheight=0;
	
	printf("Please enter your name and your height(inches).\n");
    printf("Your name:");
	scanf("%s",name);
    printf("Your height:");
	scanf("%f",&height);
    realheight=height*I_TO_F;
    printf("%s, you are %.3f feet tall.",name,realheight);
    
	return 0;
}
/*
Ý”³ö˜ÓÀý
 
*/
