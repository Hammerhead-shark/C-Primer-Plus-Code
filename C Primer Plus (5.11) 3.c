#include<stdio.h>
#define D_TO_W 7
int main()
{
int days;
int week=0,day=0;

printf("Please enter the number of days(<=0 to quit):");
scanf("%d",&days);
while(days>0){
week=days/D_TO_W;
day=days%D_TO_W;
printf("%d days is %d weeks, %d days\n",days,week,day);
printf("Now enter the number of days again:");
scanf("%d",&days);
}
printf("You have quitted just now.");

return 0;
}
