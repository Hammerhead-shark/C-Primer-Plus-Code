#include<stdio.h>
#define G_TO_L 3.785f 
#define M_TO_KM 1.609f
int main()
{
	float miles=0,gallons=0;
	float KM=0,L=0;
	float Europe=0,USA=0;
	
	printf("Please enter the travel journey(miles) and gas consumption(gallons).\n");
	printf("Travel journey(in miles):");
	scanf("%f",&miles);
	printf("Gas consumption(in gallons):");
	scanf("%f",&gallons);
	KM=miles*M_TO_KM;
	L=gallons*G_TO_L;
	Europe=L/KM;
	USA=miles/gallons;
	printf("The USA program measures travel per unit of fuel consumed (higher values, better):"
	       "%.1f Miles/Gallons\n",USA);
	printf("The European scheme measures the stroke per unit of fuel consumed (the smaller the value, the better):"
	       "%.1f L/KM",Europe);
	
	return 0;
}
/*
Ý”³ö˜ÓÀý

Please enter the travel journey(miles) and gas consumption(gallons).
Travel journey(in miles):62.137
Gas consumption(in gallons):2.1134
The USA program measures travel per unit of fuel consumed (higher values, better):29.4 Miles/Gallons
The European scheme measures the stroke per unit of fuel consumed (the smaller the value, the better):0.1 L/KM
 
*/
