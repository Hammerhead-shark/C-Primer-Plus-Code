#include<stdio.h>
int main()
{
    double weight,height;
    printf("Please enter your weight and height.\n");
    printf("Weight (pound):");
    scanf("%lf",&weight);
    printf("Height (inch):");
    scanf("%lf",&height);
//加入建立比較友好的人機交互
    if (weight < 100 && height > 64)
        if (height >= 72)
        printf("You are very tall for your weight.\n");
    else
        printf("You are tall for your weight.\n");
    else if (weight > 300 && height < 48)
        printf("You are quite short for your weight.\n");
    else
        printf("Your weight is ideal.\n");
//減少沒有用的if判斷條件
    return 0;
}
/*
輸出樣例

Please enter your weight and height.
Weight (pound):99
Height (inch):65
You are tall for your weight.

Please enter your weight and height.
Weight (pound):98
Height (inch):72
You are very tall for your weight.

Please enter your weight and height.
Weight (pound):301
Height (inch):46
You are quite short for your weight.

Please enter your weight and height.
Weight (pound):200
Height (inch):50
Your weight is ideal.

*/
