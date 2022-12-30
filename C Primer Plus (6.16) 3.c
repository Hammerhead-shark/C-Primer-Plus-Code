#include<stdio.h>
int main()
{
int i,j;
int ch='F';

for(int i=0;i<6;i++)
{
for(int j=0;j<(i+1);j++)
{
        printf("%c",ch-j);
}
printf("\n");
}

return 0;
}
/*
輸出樣例

F
FE
FED
FEDC
FEDCB
FEDCBA

*/
