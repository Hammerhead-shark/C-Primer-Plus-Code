#include<stdio.h>
int main()
{
int num1,num2;
int mod=0;

printf("This program computes moduli.\n");
printf("Enter an integer to serve as the second operand:");
scanf("%d",&num1);
printf("Now enter the first operand:");
while(scanf("%d",&num2)==1)
{
mod=num2%num1;
if(num2==0)
    break;
printf("%d %% %d is %d\n",num2,num1,mod);
printf("Enter next number for first operand (<=0 to quit):");
}
printf("Done.");

return 0;
}
/*
Sample Output

This program computes moduli.
Enter an integer to serve as the second operand:256
Now enter the first operand:438
438 % 256 is 182
Enter next number for first operand (<=0 to quit):1234567
1234567 % 256 is 135
Enter next number for first operand (<=0 to quit):0
Done.

*/
