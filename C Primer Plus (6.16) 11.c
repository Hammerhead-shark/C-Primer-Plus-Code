#include<stdio.h>
#define NUM 8
int main()
{
    int arr[NUM];
    int i=0;

    printf("Please enter eight integer number:");
    for(i=0;i<8;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("The reserve order printing eight numbers:");
    for(int i=7;i>=0;i--)/*在C語言中i=7，一共是八個元素的下標*/
        /*所以一共有八個元素倒序輸出到最後一個元素的下標（arr[0]）*/
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
/*
輸出樣例

Please enter eight integer number:1 2 3 4 5 6 7 8
The reserve order printing eight numbers:8 7 6 5 4 3 2 1

*/
