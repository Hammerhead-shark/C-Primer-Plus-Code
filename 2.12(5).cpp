#include<stdio.h>
void br()
{
	printf("Brazil,Russia");
}
void ic()
{
	printf("India,China\n");
}
int main()
{
	br();
	putchar(',');
	ic();
	ic();

	br();
	return 0;
}
