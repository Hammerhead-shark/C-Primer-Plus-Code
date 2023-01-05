//divisors.c--使用嵌套if語句顯示一個數的約數
#include<stdio.h>
#include<stdbool.h>  //用_Bool類型作爲標記，true代表1，false代表0
int main()
{
    unsigned long num;  //待測試的數字
    unsigned long div;  //可能的約數
    bool isPrime;       //素數標記

    printf("Please enter an integer for analysis;");
    printf("Enter q to quit.\n");
    while(scanf("%lu",&num)==1)
    {
        for(div=2,isPrime=true;(div*div)<=num;div++)
        {
            if(num%div==0)
            {
                if((div*div)!=num)
                {
                    printf("%lu is divisible by %lu and %lu.\n"
                           ,num,div,num/div);
                }
                else
                    printf("%lu is divisible by %lu.\n"
                           ,num,div);
                isPrime=false;   //該數字不是素數
            }
        }
        if(isPrime)
            {
                printf("%lu is prime.\n",num);
            }
        printf("Pleaase enter another integer for analysis; ");
        printf("Enter q to quit.\n");
    }
    printf("Bye.");

    return 0;
}
/*
輸出樣例



*/
