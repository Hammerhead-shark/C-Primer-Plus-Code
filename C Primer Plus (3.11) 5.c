#include<stdio.h>
#define year_to_sec 3.156e7
int main()
{
    float age=0;
	double sum=0;
	printf("Please enter your age:");
	scanf("%f",&age);
	sum=age*year_to_sec;
	printf("The number of seconds for your age(%g) is:%g",age,sum);
	/*%g用来输出实数，它根据数值的大小，自动选f格式或e格式
	（选择输出时占宽度较小的一种）
	且不输出无意义的0。
	对于指数小于-4或者大于给定精度的数值
	按照%e的控制输出
	否则按照%f的控制输出.
	*/
	return 0;
}
