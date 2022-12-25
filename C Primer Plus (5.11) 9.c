#include<stdio.h>

double Temperatures(double x)
{
const double F_TO_C=32.0;
const double C_TO_K=273.16;
double c=0,k=0;
c=5.0/9.0*(x-F_TO_C);
k=c+C_TO_K;
printf("Centigrade temperature:%.3lf\n",c);
printf("Kelvin temperature:%.3lf\n",k);
}

int main()
{
double temp=0;

printf("Please enter temperatures in Degree Fahrenheit:");
while(scanf("%lf",&temp)==1)
{
printf("Fahrenheit temperature:%.3lf\n",temp);
Temperatures(temp);
printf("Please enter temperatures in Degree Fahrenheit (enter q and other non-numeric characters to quit):");
}
printf("Done.");
return 0;
}
/*
Sample Output

Please enter temperatures in Degree Fahrenheit:77
Fahrenheit temperature:77.000
Centigrade temperature:25.000
Kelvin temperature:298.160
Please enter temperatures in Degree Fahrenheit (enter q and other non-numeric characters to quit):98
Fahrenheit temperature:98.000
Centigrade temperature:36.667
Kelvin temperature:309.827
Please enter temperatures in Degree Fahrenheit (enter q and other non-numeric characters to quit):q
Done.

*/
