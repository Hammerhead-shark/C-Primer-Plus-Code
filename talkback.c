/*talkback.c--演示与用户的交互*/
#include<stdio.h>
#include<string.h>/*提供strlen()函数原型*/
#define DENSITY 62.4/*人体密度（单位：磅/立方英尺）*/
int main()
{
	float weight,volume;
	int size,letters;
	char name[40];//name是一个可容纳40个字符的数组
	
	printf("Hi! What's your first name?\n");
	scanf("%s",name);
	printf("%s,what's your weight in pounds?\n",name);
	scanf("%f",&weight);
	size=sizeof(name);
	letters=strlen(name);
	volume=weight/DENSITY;
	printf("Well,%s,your volum is %2.2f cubic feet.\n",name,volume);
	printf("and we have %d bytes to store it.\n",size);
	 
	return 0;
}
/*用数组来储存字符串
用户所输入的字符串被储存在数组中
数组占用内存的40个空间。

使用%s来输入和输出字符串
要注意name后没有&
（&weight和name都是地址）

用strlen()函数获取字符串的长度 
*/
