#include<stdio.h>
#define year_to_sec 3.156e7
int main()
{
    float age=0;
	double sum=0;
	printf("Please enter your age:");
	scanf("%f",&age);
	sum=age*year_to_sec;
	printf("The number of seconds for your age(%g) is:%g",age,sum);
	/*%g�������ʵ������������ֵ�Ĵ�С���Զ�ѡf��ʽ��e��ʽ
	��ѡ�����ʱռ��Ƚ�С��һ�֣�
	�Ҳ�����������0��
	����ָ��С��-4���ߴ��ڸ������ȵ���ֵ
	����%e�Ŀ������
	������%f�Ŀ������.
	*/
	return 0;
}
