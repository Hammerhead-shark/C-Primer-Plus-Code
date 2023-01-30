#include<stdio.h>
#define BASIC_SALARY 10.00
#define EXTRA_WORK 1.5
#define NORMAL_TAX 0.15
#define EXTRA_TAX 0.20
#define OTHER_TAX 0.25
int main()
{
    double worktime = 0.0;
    double salary,tax,netincome;
    salary = tax = netincome = 0.0;
    printf("Please enter your "
           "working hours in a week : ");
    while (scanf("%lf",&worktime) != 1 || worktime <= 0)
    {
        while (getchar() != '\n') continue;
        printf("Please enter a right number( >= 0 ).");
    }
    salary = worktime > 40 ? (40.00 * BASIC_SALARY) + (1.5 * (worktime - 40)) * BASIC_SALARY : worktime * BASIC_SALARY;
    if (salary <= 300)
    {
        tax = 300.00 * NORMAL_TAX;
        netincome = salary - tax;
    }
    else if (salary <= 450)
    {
        tax = 300.00 * NORMAL_TAX + (salary - 300.00) * EXTRA_TAX;
        netincome = salary - tax;
    }
    else
    {
        tax = 300.00 * NORMAL_TAX + 150.00 * EXTRA_TAX + (salary - 450.00) * OTHER_TAX;
        netincome = salary - tax;
    }
    printf("There is your salary, tax and net income information.\n");
    printf("Salary : %.3lf",salary);
    printf("\nTax : %.3lf",tax);
    printf("\nNet income : %.3lf",netincome);

    return 0;
}
/*
輸出樣例

Please enter your working hours in a week : 300
There is your salary, tax and net income information.
Salary : 4300.000
Tax : 1037.500
Net income : 3262.500

Please enter your working hours in a week : 450
There is your salary, tax and net income information.
Salary : 6550.000
Tax : 1600.000
Net income : 4950.000

Please enter your working hours in a week : 521.73
There is your salary, tax and net income information.
Salary : 7625.950
Tax : 1868.988
Net income : 5756.963
*/
