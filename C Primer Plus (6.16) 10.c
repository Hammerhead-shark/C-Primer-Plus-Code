#include<stdio.h>
int main()
{
    int upper,lower;

    printf("Enter lower and upper integer limits: ");

        while(scanf("%d %d",&lower,&upper)==2&&(upper>lower))
        {
            int sum=0;
            for(int i=lower;i<=upper;i++)
            {
                sum+=i*i;
            }
            printf("The sum of the squares from %d to %d is %d.\n"
                   ,lower*lower,upper*upper,sum);
            printf("Enter next set of limits: ");
        }
        printf("Done.");

    return 0;
}
/*
Ý”³ö˜ÓÀý

Enter lower and upper integer limits: 5 9
The sum of the squares from 25 to 81 is 255.
Enter next set of limits: 3 25
The sum of the squares from 9 to 625 is 5520.
Enter next set of limits: 5 5
Done.

*/
