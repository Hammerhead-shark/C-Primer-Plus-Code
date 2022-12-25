#include<stdio.h>
#define CM_TO_IN 0.3937 //1cm=0.3937inch
#define CM_TO_ML 0.0328 //1cm=0.0328inch
int main()
{
float height;
float inch=0,feet=0;

printf("Enter a height in centimeters:");
scanf("%f",&height);
while(height>0)
{
feet=(int)(height*CM_TO_ML);
inch=(height-(feet/CM_TO_ML))*CM_TO_IN;
printf("%.1f cm=%d feet, %3.1f inches\n",height,(int)feet,inch);
printf("Enter a height in centimeters(<=0 to quit):");
scanf("%f",&height);
}
printf("bye.");

return 0;
}
/*
Sample Output

Enter a height in centimeters:182
182.0 cm=5 feet, 11.6 inches
Enter a height in centimeters(<=0 to quit):168.7
168.7 cm=5 feet, 6.4 inches
Enter a height in centimeters(<=0 to quit):0
bye.

*/
