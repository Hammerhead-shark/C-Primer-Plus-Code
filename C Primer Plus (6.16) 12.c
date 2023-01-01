#include<stdio.h>
int main()
{
    int count;

    printf("Please enter the number of calculations (<=0 to quit):");

    while(scanf("%d",&count)==1&&(count>0))
    {
        double sum1=0.0;
        double sum2=0.0;
        for(int i=1,mark=1;i<=count;i++,mark*=-1)
        {
            sum1+=1.0/i;
            sum2+=(1.0/i)*mark;
        }
        printf("1.0+1.0/2.0+1.0/3.0+1.0/4.0+...sum are:%lf\n",sum1);
        printf("1.0-1.0/2.0+1.0/3.0-1.0/4.0+...sum are:%lf\n",sum2);
        printf("The sum of the two sequences is:%lf\n",sum1+sum2);
        printf("\nNow you can enter again (<=0 to quit):");
    }
    printf("Done.");
    return 0;
}
/*
輸出樣例

Please enter the number of calculations (<=0 to quit):100
1.0+1.0/2.0+1.0/3.0+1.0/4.0+...sum are:5.187378
1.0-1.0/2.0+1.0/3.0-1.0/4.0+...sum are:0.688172
The sum of the two sequences is:5.875550

Now you can enter again (<=0 to quit):1000
1.0+1.0/2.0+1.0/3.0+1.0/4.0+...sum are:7.485471
1.0-1.0/2.0+1.0/3.0-1.0/4.0+...sum are:0.692647
The sum of the two sequences is:8.178118

Now you can enter again (<=0 to quit):10000
1.0+1.0/2.0+1.0/3.0+1.0/4.0+...sum are:9.787606
1.0-1.0/2.0+1.0/3.0-1.0/4.0+...sum are:0.693097
The sum of the two sequences is:10.480703

Now you can enter again (<=0 to quit):0
Done.

*/
