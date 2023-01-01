#include<stdio.h>
int main()
{
    double Lucky=100.0;
    int year=0;

    while(Lucky>9)
    {
        ++year;
        Lucky+=Lucky*0.08;
        Lucky-=10.0;
        printf("After %d year, Chuckie Lucky have "
               "%.3lf million dollars left.\n",year,Lucky);
    }
    printf("In the %dst year, "
           "Chuckie Luck withdrew all the money!",year+1);

    return 0;
}
/*
輸出樣例

After 1 year, Chuckie Lucky have 98.000 million dollars left.
After 2 year, Chuckie Lucky have 95.840 million dollars left.
After 3 year, Chuckie Lucky have 93.507 million dollars left.
After 4 year, Chuckie Lucky have 90.988 million dollars left.
After 5 year, Chuckie Lucky have 88.267 million dollars left.
After 6 year, Chuckie Lucky have 85.328 million dollars left.
After 7 year, Chuckie Lucky have 82.154 million dollars left.
After 8 year, Chuckie Lucky have 78.727 million dollars left.
After 9 year, Chuckie Lucky have 75.025 million dollars left.
After 10 year, Chuckie Lucky have 71.027 million dollars left.
After 11 year, Chuckie Lucky have 66.709 million dollars left.
After 12 year, Chuckie Lucky have 62.046 million dollars left.
After 13 year, Chuckie Lucky have 57.009 million dollars left.
After 14 year, Chuckie Lucky have 51.570 million dollars left.
After 15 year, Chuckie Lucky have 45.696 million dollars left.
After 16 year, Chuckie Lucky have 39.351 million dollars left.
After 17 year, Chuckie Lucky have 32.500 million dollars left.
After 18 year, Chuckie Lucky have 25.100 million dollars left.
After 19 year, Chuckie Lucky have 17.107 million dollars left.
After 20 year, Chuckie Lucky have 8.476 million dollars left.
In the 21st year, Chuckie Luck withdrew all the money!

*/
