#include<stdio.h>
#define BIT 8
int main()
{
	float file=0,speed=0,time=0;
	printf("Please enter the net speed\n");
	printf("The net speed:");
	scanf("%f",&speed);
    printf("Please enter the size of the file:\n");
	printf("The size of flie:");
	scanf("%f",&file);
	time=file*BIT/speed;
	printf("At %.2f megabits per seconds, a file of %.2f megabytes\n"
	       "downloads in %.2f seconds.",speed,file,time);
	
	return 0;
 } 
 /*
 Ý”³ö˜ÓÀý
 
Please enter the net speed
The net speed:18.123
Please enter the size of the file:
The size of flie:2.203
At 18.12 megabits per seconds, a file of 2.20 megabytes
downloads in 0.97 seconds.
  
*/
