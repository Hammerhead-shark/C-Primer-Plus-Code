#include<stdio.h>
void br()//�Զ��x���� 
{
	printf("Brazil,Russia");
}
void ic()//�Զ��x���� 
{
	printf("India,China\n");
}
int main()
{
	br();//�����{�� 
	putchar(',');//ݔ��һ���ַ������� 
	ic();
	ic();
	br();
	return 0;
}
