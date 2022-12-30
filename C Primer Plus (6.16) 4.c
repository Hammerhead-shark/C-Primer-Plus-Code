#include<stdio.h>
int main()
{
char ch='A';
int i=0,j=0;
for(i=0;i<6;i++)
{
for(j=0;j<(i+1);j++)
{
printf("%c",ch);
ch++;
}
printf("\n");
}
return 0;
}
/*
輸出樣例

A
BC
DEF
GHIJ
KLMNO
PQRSTU

*/
