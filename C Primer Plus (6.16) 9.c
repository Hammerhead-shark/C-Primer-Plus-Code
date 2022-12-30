#include<stdio.h>

float fun(float x1,float x2)
{
     return (x1-x2)/(x1*x2);
}

int main()
{
     float x1,x2;
     printf("Please enter two floating-point digits.\n");
     printf("num1 and num2:");

     while(scanf("%g",&x1)==1&&scanf("%g",&x2)==1)
    {
           printf("(%g-%g) / (%g*%g) = %g\n"
                 ,x1,x2,x1,x2,fun(x1,x2));
           printf("Please enter again (num1 and num2):");
    }
printf("You have exited the program.");

return 0;
}
/*
輸出樣例

Please enter two floating-point digits.
num1 and num2:10 20
(10-20) / (10*20) = -0.05
Please enter again (num1 and num2):2 1
(2-1) / (2*1) = 0.5
Please enter again (num1 and num2):3 4
(3-4) / (3*4) = -0.0833333
Please enter again (num1 and num2):q
You have exited the program.

*/
