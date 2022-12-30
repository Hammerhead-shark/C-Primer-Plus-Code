#include<stdio.h>
int main()
{
int lolimit,uplimit;
int i=0,number=0;
int square=0,cube=0;

printf("Please enter the lower limit:");
scanf("%d",&lolimit);
printf("Please enter the upper limit:");
scanf("%d",&uplimit);
for(int i=lolimit;i<=uplimit;i++)
{
    number=i;
    square=i*i;
    cube=i*i*i;
    printf("number=%d\t square=%d\t cube=%d\n",number,square,cube);
}
printf("That's all.");
return 0;
}
/*
輸出樣例

Please enter the lower limit:2
Please enter the upper limit:20
number=2         square=4        cube=8
number=3         square=9        cube=27
number=4         square=16       cube=64
number=5         square=25       cube=125
number=6         square=36       cube=216
number=7         square=49       cube=343
number=8         square=64       cube=512
number=9         square=81       cube=729
number=10        square=100      cube=1000
number=11        square=121      cube=1331
number=12        square=144      cube=1728
number=13        square=169      cube=2197
number=14        square=196      cube=2744
number=15        square=225      cube=3375
number=16        square=256      cube=4096
number=17        square=289      cube=4913
number=18        square=324      cube=5832
number=19        square=361      cube=6859
number=20        square=400      cube=8000
That's all.

*/
