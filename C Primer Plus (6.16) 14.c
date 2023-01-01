#include<stdio.h>
#define NUM 8
int main()
{
    double arr1[NUM],arr2[NUM];
    double sum=0.0;

    printf("Please enter eight numbers:");
    for(int i=0;i<NUM;i++)
    {
        scanf("%lf",&arr1[i]);
    }
    for(int i=0;i<NUM;i++)
    {
        arr2[i]=arr1[i]+arr2[i-1];
    }
    printf("The result of arr1 is:");
    for(int i=0;i<NUM;i++)
    {
        printf("%g\t",arr1[i]);
    }
    printf("\n");
    printf("The result of arr2 is:");
    for(int i=0;i<NUM;i++)
    {
        printf("%g\t",arr2[i]);
    }

    return 0;
}
/*
輸出樣例

Please enter eight numbers:1 2 3 4 5 6 7 8
The result of arr1 is:1 2       3       4       5       6       7       8
The result of arr2 is:1 3       6       10      15      21      28      36

*/
