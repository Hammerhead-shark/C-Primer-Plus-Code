#include<stdio.h>
int main()
{
     const float MIN = 0.0f;   //分數下限是0分
     const float MAX = 100.0f; //分數上限是100分

     float score;
     float total = 0.0f;       //求總分
     int n = 0;                //接受符合規定分數的個數
     float min = MIN;          //分數下限
     float max = MAX;          //分數上限

     printf("Enter the first score (q to quit): ");
     while(scanf("%f",&score)==1)
     {
         if(score < MIN || score > MAX)
         {
             printf("%0.1f is an invalid value. Try again: ",score);
             continue;   //跳轉至while循環的測試條件
             //continue語句讓程序跳過有效輸入部分的代碼。程序開始下一輪循環，準備讀取下一個輸入值。
         }
         printf("Accepting %0.1f:\n",score);
         min = (score < min) ? score : min;
         max = (score > max) ? score : max;
         total += score;
         n++;                  //統計一共輸入了多少分數（計數器）
         printf("Enter next score (q to quit): ");
     }
     if (n > 0)
     {
         printf("Average of %d scores is %0.1f.\n", n, total / n);
         printf("Low = %0.1f, high = %0.1f\n", min, max);
     }
     else
        printf("No valid scores were entered.\n");

    return 0;
}
/*
輸出樣例

Enter the first score (q to quit): 188
188.0 is an invalid value. Try again: 90
Accepting 90.0:
Enter next score (q to quit): 12
Accepting 12.0:
Enter next score (q to quit): 100
Accepting 100.0:
Enter next score (q to quit): 85
Accepting 85.0:
Enter next score (q to quit): q
Average of 4 scores is 71.8.
Low = 12.0, high = 100.0

*/
