//wordcnt.c--統計字符數，單詞數，行數
#include<stdio.h>
#include<ctype.h>           //為isspace()提供函數原型
#include<stdbool.h>         //為bool，true，false，提供定義
#define STOP '|'            //使用“|”作為輸入的末尾標記
int main(void)
{
    char c;                 //讀入字符
    char prev;              //讀入前一個字符
    long n_chars=0L;        //字符數
    int n_lines = 0;        //行數
    int n_words = 0;        //單詞數
    int p_lines = 0;        //不完整的行數
    bool inword = false;    //如果c在單詞中，inword等於true

    printf("Enter text to be analyzed (| to terminate):\n");
    prev='\n';              //用於識別完整的行
    while((c = getchar()) != STOP)
    {
        n_chars++;          //統計字符
        if(c=='\n')
            n_lines++;      //統計行
        if(!isspace(c) && !inword)
        {
            n_words++;      //開始一個新的單詞
            inword = true;  //統計單詞
        }
        if(isspace(c) && inword)
            inword = false; //達到單詞的末尾
        prev=c;             //保存字符的值
    }
    if(prev != '\n')
        p_lines = 1;
    printf("characters = %ld, words = %d, lines = %d, ",
           n_chars,n_words,n_lines);
    printf("partial lines = %d\n", p_lines);

    return 0;
}
/*
輸出樣例

Enter text to be analyzed (| to terminate):
Reason is a
powerful servant but
an inadequate master.
|
characters = 55, words = 9, lines = 3, partial lines = 0

*/
