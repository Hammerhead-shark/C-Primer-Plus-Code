#include<stdio.h>
int main()
{
	int num;
	
	printf("Please enter three integers:\n");
	scanf("%*d %*d %d",&num);
	printf("The last integer was %d\n",num);
	
	return 0;
}
/*ݔ������

Please enter three integers:
2013 2014 2015
The last integer was 2015

�@�Y�Ñ�ݔ���������Δ��֣�����ֻݔ����2015
��scanf��ʹ��*�������%���D�Q�ַ�֮�g��scanf���Ԅ����^������ݔ���
 
*/
