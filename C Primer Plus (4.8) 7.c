#include<stdio.h>
#include<float.h>
int main()
{
	double double_value=1.0/3.0;
	float float_value=1.0/3.0;
	
	printf("Request1:float_value=%8f double_value=%8.6lf\n",float_value,double_value);
	printf("\nRequest2:float_value=%8.12f double_value=%8.12lf\n",float_value,double_value);
	printf("\nRequest3:float_value=%8.16f double_value=%8.16lf\n",float_value,double_value);
	printf("\nfloat and double maximum significant digits:\n");
    printf("FLT_DIG = %d, DBL_DIG = %d\n", FLT_DIG, DBL_DIG);
    //FLT_DIG代表float有效十进制数字位数
    //DBL_DIG代表double有效十进制数字位数
	
	return 0;
}
/*
輸出樣例 

Request1:num1=0.333333 num2=0.333333

Request2:num1=0.333333333333 num2=0.333333343267

Request3:num1=0.3333333333333333 num2=0.3333333432674408

float and double maximum significant digits:
FLT_DIG = 6, DBL_DIG = 15

*/
