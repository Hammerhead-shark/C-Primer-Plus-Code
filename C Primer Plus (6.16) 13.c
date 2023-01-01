#include<stdio.h>
#define NUM 8
int main()
{
    int arr[NUM],sum;
    int i=0;
    for(int i=0,sum=2;i<NUM;i++,sum*=2)
    {
        arr[i]=sum;
    }

    printf("The elements in the array are:");
    do
    {
        printf("%d ",arr[i]);
        i++;
    }
    while(i<NUM);
    printf("\nDone.");

    return 0;
}
/*
Ý”³ö˜ÓÀý

The elements in the array are:2 4 8 16 32 64 128 256
Done.

*/
