#include<stdio.h>
void br()//自定義函數 
{
	printf("Brazil,Russia");
}
void ic()//自定義函数 
{
	printf("India,China\n");
}
int main()
{
	br();//函數調用 
	putchar(',');//輸出一個字符‘，’ 
	ic();
	ic();
	br();
	return 0;
}
