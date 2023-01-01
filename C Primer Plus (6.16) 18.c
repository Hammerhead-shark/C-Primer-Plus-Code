#include<stdio.h>
#define DUNBAR 150
int main()
{
    int origin=5;
    int Friend_sub=1;

    while(origin<DUNBAR)
    {
        origin=2*(origin-Friend_sub++);
        printf("After %d weeks,"
               "Rabnud has %d friends now.\n",Friend_sub-1,origin);
    }
    printf("In the 9th week, "//八周后（after）才會超過Dunbar's number，所以朋友在第九周超過。
           "Dr. Rabnum will have more friends than Dunbar's number!");
    return 0;
}
/*
輸出樣例

After 1 weeks,Rabnud has 8 friends now.
After 2 weeks,Rabnud has 12 friends now.
After 3 weeks,Rabnud has 18 friends now.
After 4 weeks,Rabnud has 28 friends now.
After 5 weeks,Rabnud has 46 friends now.
After 6 weeks,Rabnud has 80 friends now.
After 7 weeks,Rabnud has 146 friends now.
After 8 weeks,Rabnud has 276 friends now.
In the 9th week, Dr. Rabnum will have more friends than Dunbar's number!

*/
