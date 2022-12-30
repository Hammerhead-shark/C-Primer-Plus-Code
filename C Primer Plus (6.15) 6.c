#include<stdio.h>
int main()
{
int i,j;
for(int i=0;i<4;i++)
{
for(int j=0;j<8;j++)
{
    printf("$");
}
printf("\n");/*儅字符輸出8個“$”后出循環換行*/
}
return 0;
}
/*
輸出樣例

$$$$$$$$
$$$$$$$$
$$$$$$$$
$$$$$$$$

*/
