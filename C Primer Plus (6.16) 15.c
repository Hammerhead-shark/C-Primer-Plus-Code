#include<stdio.h>
#define NUM 255
int main()
{
    char arr[NUM];
    int i=0;

    printf("Please enter what you think:");
    while (scanf("%c",&arr[i])==1 && i<NUM )//&& arr[i]!='\n')
    {
        i++;
    }
        printf("The reverse order of the input:");
        for (i--; (i+1)>0; i--)
        {
            printf("%c",arr[i]);
        }
        printf("\nThat's all.");

    return 0;
}
/*
Ý”³ö˜ÓÀý

Please enter what you think:apple tree
The reverse order of the input:eert elppa
That's all.

*/
