#include<stdio.h>
int main()
{
	int age;/*׃��*/
	float assets;/*׃��*/
	char pet[30];/*�ַ����M*/
	
	printf("Enter your age, assets, and favourite pet.\n");
	scanf("%d %f",&age,&assets);/*����׃����ͼ�&*/
	scanf("%s",pet);/*�ַ����M����&*/
	printf("%d $%.2f %s\n",age,assets,pet);
	 
	return 0;
}
/*ݔ������

Enter your age, assets, and favourite pet.
30
92360.88 llama
30 $92360.88 llama

*/
