#include<stdio.h>
int Prime (int x)
{
    int index = 0;
    for (index = 2; index < x; index++)
    {
        if (x % index == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int num;
    printf("Please enter a number (<= 0 to quit) : ");
    while (scanf("%d",&num) ==1 && num > 0)
    {
        if (num == 1)
        {
            printf("This number is not a prime.");
        }
        else
        {
            printf("These are prime numbers less than %d : ",num);
            for (int index = 2; index < num; index++)
                if (Prime(index))
                {
                    printf("%-5d",index);
                }
        }
        printf("\nNow you can enter again : ");
    }
    printf("That's all.");

    return 0;
}
/*
Ý”³ö˜ÓÀý

Please enter a number (<= 0 to quit) : 15
These are prime numbers less than 15 : 2    3    5    7    11   13
Now you can enter again : 40
These are prime numbers less than 40 : 2    3    5    7    11   13   17   19   23   29   31   37
Now you can enter again : 0
That's all.

*/
