#include<stdio.h>
int main()
{
	int age;/*變量*/
	float assets;/*變量*/
	char pet[30];/*字符數組*/
	
	printf("Enter your age, assets, and favourite pet.\n");
	scanf("%d %f",&age,&assets);/*基本變量類型加&*/
	scanf("%s",pet);/*字符數組不加&*/
	printf("%d $%.2f %s\n",age,assets,pet);
	 
	return 0;
}
/*輸出樣例

Enter your age, assets, and favourite pet.
30
92360.88 llama
30 $92360.88 llama

*/
