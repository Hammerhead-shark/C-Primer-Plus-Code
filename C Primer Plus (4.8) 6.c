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
	string1=strlen(firstname);
	printf("Please enter your last name.\n");
	printf("Last name:");
	scanf("%s",lastname);
	string2=strlen(lastname);
	printf("%s %s\n",firstname,lastname);
	printf("%*d %*d\n",string1,string1,string2,string2);
	printf("%s %s\n",firstname,lastname);
	printf("%-*d %-*d\n",string1,string1,string2,string2);
	
	return 0;
}
/*
Ý”³ö˜ÓÀý

Please enter your first name.
First name:Tomoko
Please enter your last name.
Last name:Kuroki
Tomoko Kuroki
     6      6
Tomoko Kuroki
6      6
 
*/
