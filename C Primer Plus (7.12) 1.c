#include<stdio.h>
int main()
{
    int space, linebreak, others;
    int realothers = 0;
    char ch;
    space = linebreak = others = 0;

    printf("Please enter some characters (# to quit).\n");
    while ((ch = getchar()) != '#')
    {
        if (ch == ' ' ? space++ : others++ && ch == '\n' ? linebreak++ : others++);
    }
    realothers = others / 2;
    printf("These are the number of characters required for statistics.\n");
    printf("Space : %d" ,space);
    printf("\nLinebreak : %d" ,linebreak);
    printf("\nOthers: %d" ,realothers);

    return 0;
}
/*
輸出樣例



*/
