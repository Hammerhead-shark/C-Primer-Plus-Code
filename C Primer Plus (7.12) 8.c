#include<stdio.h>
#include<stdbool.h>
#define EXTRA_WORK 1.5
#define NORMAL_TAX 0.15
#define EXTRA_TAX 0.20
#define OTHER_TAX 0.25
void quit ();
void menu ();
void Salary (double Bsalary , double worktime);

int choice = 0;
double worktime = 0.0;

int main()
{
    while (true)
    {
         menu ();

         switch(choice)
     {
        case 1 :
           {
               Salary(8.75,worktime);
               break;
           }
        case 2 :
           {
               Salary(9.33,worktime);
               break;
           }
        case 3 :
           {
               Salary(10.00,worktime);
               break;
           }
        case 4 :
           {
               Salary(11.20,worktime);
               break;
           }
        case 5 :
           {
               quit();
               printf("Done.");
               return 0;
           }
     }
    }
}

void quit()
{
    printf("\t\t\n************************************************\t\t\n");
    printf("||                                            ||");
    printf("\n||                                            ||");
    printf("\n||      Thank you to use this programme!      ||");
    printf("\n||                                            ||");
    printf("\n||                                            ||");
    printf("\t\t\n************************************************\t\t\n");
}

void menu()
{
    printf("\t\t\n*****************************************************************\t\t\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("1) $8.75/hr                          2) $9.33/hr");
    printf("\n3) $10.00/hr                         4) $11.20/hr\n");
    printf("5) quit");
    printf("\t\t\n*****************************************************************\t\t\n");
    printf("Please enter your options: ");
    scanf("%d",&choice);
    while (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5)
    {
        printf("Please enter the right choice:");
        scanf("%d",&choice);
    }
}

void Salary(double Bsalary , double worktime)
{
  double tax,netincome,salary;
  salary = tax = netincome = 0.0;
  printf("Please enter your working hours in a week : ");

    while (scanf("%lf",&worktime) != 1 || worktime <= 0)
    {
        while (getchar() != '\n') continue;
        printf("Please enter a right number( >= 0 ).");
    }
    salary = worktime > 40 ? (40.00 * Bsalary) + (1.5 * (worktime - 40)) * Bsalary : worktime * Bsalary;
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
  }
/*
Ý”³ö˜ÓÀý

*****************************************************************
Enter the number corresponding to the desired pay rate or action:
1) $8.75/hr                          2) $9.33/hr
3) $10.00/hr                         4) $11.20/hr
5) quit
*****************************************************************
Please enter your options: 2
Please enter your working hours in a week : 600
There is your salary, tax and net income information.
Salary : 8210.400
Tax : 2015.100
Net income : 6195.300
*****************************************************************
Enter the number corresponding to the desired pay rate or action:
1) $8.75/hr                          2) $9.33/hr
3) $10.00/hr                         4) $11.20/hr
5) quit
*****************************************************************
Please enter your options: 1
Please enter your working hours in a week : 325.44
There is your salary, tax and net income information.
Salary : 4096.400
Tax : 986.600
Net income : 3109.800
*****************************************************************
Enter the number corresponding to the desired pay rate or action:
1) $8.75/hr                          2) $9.33/hr
3) $10.00/hr                         4) $11.20/hr
5) quit
*****************************************************************
Please enter your options: 5

************************************************
||                                            ||
||                                            ||
||      Thank you to use this programme!      ||
||                                            ||
||                                            ||
************************************************
Done.

*/
