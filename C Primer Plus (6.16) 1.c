#include<stdio.h>
int main()
{
char ch[26]={'a','b','c','d','f','g','h','i','j','k','l','m'
              ,'n','o','p','q','r','s','t','u','v','w','x','y','z'};
int i=0;

for(i=0;i<26;i++)
{
  printf("%c ",ch[i]);
}

return 0;
}
/*
輸出樣例

a b c d f g h i j k l m n o p q r s t u v w x y z

*/
