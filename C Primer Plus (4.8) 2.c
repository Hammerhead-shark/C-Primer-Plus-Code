#include<stdio.h>
#include<string.h>
int main()
{
	char firstname[30];
	char lastname[30];
	int string1=0,string2=0;

	printf("Please enter your first name.\n");
	printf("First name:");
	scanf("%s",firstname);
	printf("Please enter your last name.\n");
	printf("Last name:");
	scanf("%s",lastname);
	string1=strlen(firstname);
	string2=strlen(lastname);
	printf("Request 1:/*\"%s %s\"*/\n",firstname,lastname);
	printf("Request 2:/*\"%20s %20s\"*/\n",firstname,lastname);
	printf("Request 3:/*\"%-20s %-20s\"*/\n",firstname,lastname);
	printf("Request 4:/*%*s %*s*/",string1+3,firstname,string2+3,lastname);
	
	return 0;
}
/*
Ý”³ö˜ÓÀý 

//Please enter your first name.
//First name:Tomoko
//Please enter your last name.
//Last name:Kuroki
// Request 1:/*"Tomoko Kuroki"*/
// Request 2:/*"              Tomoko               Kuroki"*/
// Request 3:/*"Tomoko               Kuroki              "*/
// Request 4:/*   Tomoko    Kuroki*/


