#include<stdio.h>
#define M_TO_H 60
int main()
{
	int time;
	int hour=0,minute=0;
	
	printf("Please enter the time(mins)\n");
	printf("Enter 0 or num<0 to quit.\n");
	printf("Your time:");
	scanf("%d",&time);
	while(time>0)
	{
		hour=time/M_TO_H;
		minute=time%M_TO_H;
		printf("%d mintues is %d hours and %d minutes\n",time,hour,minute);
		printf("Please enter again!\n");
		printf("Your time:");
		scanf("%d",&time);
	}
	printf("Done!");
	 
	return 0;
}
/*
İ”³ö˜ÓÀı 

Please enter the time(mins)
Enter 0 or num<0 to quit.
Your time:20
20 mintues is 0 hours and 20 minutes
Please enter again!
Your time:60
60 mintues is 1 hours and 0 minutes
Please enter again!
Your time:85
85 mintues is 1 hours and 25 minutes
Please enter again!
Your time:0
Done!

*/
