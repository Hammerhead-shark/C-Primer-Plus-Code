 #include<stdio.h>
  int main()
  {
  int count,sum;
  int i=0;

  count=0;
  sum=0;
  printf("Please enter the days you work: ");
 scanf("%d",&i);
 while(count++<i)
 {
 sum+=count;//sum=sum+count;
 }
 printf("Sum=%d\n",sum);
 printf("That all!");

 return 0;
 }
 /*
 Sample Output

 Please enter the days you work: 20
 Sum=210
 That all!

 */
