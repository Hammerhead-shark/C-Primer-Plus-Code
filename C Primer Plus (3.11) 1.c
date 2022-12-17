#include <stdio.h>
#include <float.h>
#include <limits.h>

int main(void)
{
    int big_int = 2147483647;
    //↑signed int最大值是2的31次方减1;
    float big_float = 3.4e38;
    //↑float最大值一般是3.4E38;
    float small_float = 10.0 / 3;
    //↑float有效位数是6位;
    printf("The big int data is %d.\n", big_int + 1);
    //↑整型数据最大值+1会造成越界,结果是-2147493648;
    printf("The big float data is %f.\n", big_float * 10);
    //↑float最大值*10会造成越界,结果是inf;
    printf("The big bit float data is %f.\n", small_float);
    //↑float最大有效精度;
    printf("The max float data is %f.\n", FLT_MAX);
    //↑float类型最大值;
    printf("The max int data is %ld.\n", INT_MAX);
    //↑int类型最大值;

    return 0;
}
