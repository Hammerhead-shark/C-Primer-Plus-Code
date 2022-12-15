#include<stdio.h>
void jolly()/*自定义函数*/
{
	printf("For he's a jolly good fellow!\n"); 
}
void deny()/*自定义函数*/
{
	printf("Which nobody can deny!\n");
 } 
 int main()/*主函数开始*/
 {
 	jolly();/*函数调用*/ 
 	jolly();
 	jolly();
 	deny();
 	return 0;
 }
