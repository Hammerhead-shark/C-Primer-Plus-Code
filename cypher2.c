#include<stdio.h>
#include<ctype.h>  /*包含isalpha()的函數原型*/
int main()
{
    char ch;

    while((ch=getchar()) != '\n')
    {
        if(isalpha(ch))    //如果是一個字符
            putchar(ch+1); //顯示該字符的下一個字符
        else               //否則
            putchar(ch);   //原樣顯示
    }
    putchar(ch);           //顯示換行符

    return 0;
}
/*
輸出樣例

Look! It's a programmer!
Mppl! Ju't b qsphsbnnfs!

*/
