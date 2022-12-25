#include<stdio.h>
double fun(double x)
{
printf("The cube of the number is:%g",x*x*x);
return x;
}
int main()
{
double num;

printf("Please enter a number:");
while(scanf("%lf",&num)==1)
{
   fun(num);
   printf("\n");
   printf("Please enter another number:");
}
printf("You enter a wrong data,the program has been quit.");
return 0;
}
/*
Sample Output

Please enter a number:3
The cube of the number is:27
Please enter another number:2
The cube of the number is:8
Please enter another number:5
The cube of the number is:125
Please enter another number:p
You enter a wrong data,the program has been quit.

*/
