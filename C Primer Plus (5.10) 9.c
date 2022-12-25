#include<stdio.h>
#define G 103
int main()
{
	char ch=96;
	
	while(ch++<G)
	{
		printf("%5c",ch);
	}
	printf("\n");
	
	return 0;
}
