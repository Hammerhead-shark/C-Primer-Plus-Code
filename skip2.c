#include<stdio.h>
int main()
{
	int num;
	
	printf("Please enter three integers:\n");
	scanf("%*d %*d %d",&num);
	printf("The last integer was %d\n",num);
	
	return 0;
}
/*輸出樣例

Please enter three integers:
2013 2014 2015
The last integer was 2015

這裏用戶輸入三個整形數字，最後只輸出了2015
在scanf中使用*修飾符放在%和轉換字符之間，scanf會自動跳過相應的輸入項
 
*/
