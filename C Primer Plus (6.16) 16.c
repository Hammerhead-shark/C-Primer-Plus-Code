#include<stdio.h>
int main()
{
    double Daphne=100.0,Deirdre=100.0;
    int year=0;
    while(Deirdre<=Daphne)
    {
        Deirdre+=Deirdre*0.05;
        Daphne+=100.0*0.1;
        ++year;
    }
    printf("Deirdre=%.3lf\n",Deirdre);
    printf("Daphne=%.3lf\n",Daphne);
    printf("Deirdre>Daphne\n");
    printf("Deirdre surpassed Daphne for %d years.",year);

    return 0;
}
/*
輸出樣例

Deirdre=373.346
Daphne=370.000
Deirdre>Daphne
Deirdre surpassed Daphne for 27 years.

*/
