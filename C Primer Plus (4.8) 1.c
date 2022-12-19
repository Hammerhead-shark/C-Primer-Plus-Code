#include<stdio.h>
int main()
{
	char firstname[30];
	char lastname[30];

	printf("Please enter your first name.\n");
	printf("First name:");
	scanf("%s",firstname);
	printf("Please enter your last name.\n");
	printf("Last name:");
	scanf("%s",lastname);
	printf("Hello! %s %s Welcome~!",firstname,lastname);
	
	return 0;
}
/*
Ý”³ö˜ÓÀý

Please enter your first name.
First name:Tomoko
Please enter your last name.
Last name:Kuroki
Hello! Tomoko Kuroki Welcome~!

*/
