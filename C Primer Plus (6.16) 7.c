#include<stdio.h>
#include<string.h>
#define WORD 40
int main()
{
char str[WORD];
int i=0;
int string1;

printf("Please enter a word:");
scanf("%s",str);
string1=strlen(str);
printf("The word is:\n");
printf("%s\n",str);

printf("The word in reverse order:\n");
for(i=string1;i>=0;i--)
{
    printf("%c",str[i]);
}

return 0;
}
/*
輸出樣例

Please enter a word:Tomoko
The word is:
Tomoko
The word in reverse order:
okomoT

*/
