#include<stdio.h>
#define PRAISE "You are an extraordinary being."
int main()
{
	printf("Hi,what is your name?\n");
	printf("Your name:");
	char name[40],whole_name;
	scanf("%s",&name);
	printf("Hello %s. %s",name,PRAISE);
	return 0;
}
