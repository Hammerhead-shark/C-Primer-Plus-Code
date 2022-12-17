#include<stdio.h>
int main()
{
	char ch0='\n';//将转义序列，十进制值，八进制字符常量和十六进制字符常量分别进行赋值 
	char ch1=13;
	char ch2='\015';
	char ch3='\xd';
	//上述为了变量名字不起冲突加了不同的编号（1 2 3当然没有用到数组，因为也不需要） 
	printf("%c",ch0);
	printf("%d\n",ch1);
	printf("%o\n",ch2);
	printf("%X\n",ch3);
	//打印一下他们所显示的值和字符，可以发现在以各自的格式打印后都可以把值换算成ASCII码值的回车字符（13） 
	return 0;
 } 
