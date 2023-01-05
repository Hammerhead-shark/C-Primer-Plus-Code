/*使用條件運算符*/
#include<stdio.h>
#define COVERAGE 350    //每罐油漆可刷的面積（單位：平方英尺）
int main()
{
    int sq_feet;
    int cans;

    printf("Enter number of square feet to be painted:\n");
    while(scanf("%d",&sq_feet) == 1)
    {
        cans = sq_feet / COVERAGE;
        cans += (sq_feet % COVERAGE == 0) ? 0 : 1 ;
        printf("You need % d %s of paint.\n",cans,cans == 1 ? "can" : "cans");
        //cans == 1 ? "can" : "cans" -> 如果cans的值是1，則打印can；否則，則打印cans。
        printf("Enter next value (q to quit) :\n");
    }

    return 0;
}
/*
輸出樣例

Enter number of square feet to be painted:
349
You need  1 can of paint.
Enter next value (q to quit) :
351
You need  2 cans of paint.
Enter next value (q to quit) :
q

*/
