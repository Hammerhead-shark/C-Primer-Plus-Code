/*talkback.c--��ʾ���û��Ľ���*/
#include<stdio.h>
#include<string.h>/*�ṩstrlen()����ԭ��*/
#define DENSITY 62.4/*�����ܶȣ���λ����/����Ӣ�ߣ�*/
int main()
{
	float weight,volume;
	int size,letters;
	char name[40];//name��һ��������40���ַ�������
	
	printf("Hi! What's your first name?\n");
	scanf("%s",name);
	printf("%s,what's your weight in pounds?\n",name);
	scanf("%f",&weight);
	size=sizeof(name);
	letters=strlen(name);
	volume=weight/DENSITY;
	printf("Well,%s,your volum is %2.2f cubic feet.\n",name,volume);
	printf("and we have %d bytes to store it.\n",size);
	 
	return 0;
}
/*�������������ַ���
�û���������ַ�����������������
����ռ���ڴ��40���ռ䡣

ʹ��%s�����������ַ���
Ҫע��name��û��&
��&weight��name���ǵ�ַ��

��strlen()������ȡ�ַ����ĳ��� 
*/
