#include<stdio.h>
int main()
{
char ch;
int i,j,k;
/*i是計數器，j是控制字母輸出的量單位，k是計算空格使用的計數器*/
int length=0;

printf("Please enter a letter:");
scanf("%c",&ch);
printf("The number of lines of the triangle is "
       "the position of the input letter %c in the alphabet.\n",ch);
length=ch-'A';

for(int i=0;i<=length;i++)
{
    char put='A'-1;
    for(int K=0;K<length-i;K++)
    {
        printf(" ");
    }
        for(int j=0;j<(i+1);j++)
        {
            ++put;
             printf("%c",put);
        }
        for(int j=0;j<i;j++)
        {
            --put;
            printf("%c",put);
        }
 printf("\n");
}

return 0;
}
/*
輸出樣例

Please enter a letter:E
The number of lines of the triangle is the position of the input letter E in the alphabet.
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

*/
