#include<stdio.h>
#define P_TO_C 1/2//1Æ·ÍÑ=2±­ 
#define C_TO_O 8//1±­=8°»Ë¾ 
#define O_TO_S 2//1°»Ë¾=2É× 
#define S_TO_Ss 3//1É×=3²èÉ× 
int main()
{
	float cups=0,pint=0,ounce=0,spoon=0,teaspoon=0;
	printf("Please enter the number of cups:");
	scanf("%f",&cups);
	pint=cups*P_TO_C ;
	ounce=cups*C_TO_O;
	spoon=ounce*O_TO_S;
	teaspoon=spoon*S_TO_Ss;
	printf("%g cup(s) equal to %g pints.\n",cups,pint);
	printf("%g cup(s) equal to %g ounces.\n",cups,ounce);
	printf("%g cup(s) equal to %g spoons.\n",cups,spoon);
	printf("%g cup(s) equal to %g teaspoons.\n",cups,teaspoon);
	printf("Pint=%g\n",pint);
	printf("Ounce=%g\n",ounce);
	printf("Spoon=%g\n",spoon);
	printf("Teaspoon=%g\n",teaspoon);
	return 0;
}
