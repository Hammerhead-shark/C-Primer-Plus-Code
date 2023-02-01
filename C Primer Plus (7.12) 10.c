 #include<stdio.h>
 #include<stdbool.h>
 #define Choice1 17850
 #define Choice2 23900
 #define Choice3 29750
 #define Choice4 14875
 #define TAX1 0.15
 #define TAX2 0.28
 void MENU();
 void QUIT();
 double TAX_PLAN1 (double money, double Ctax);
 double TAX_PLAN2 (double money1, double Ctax1);
 double TAX_PLAN3 (double money2, double Ctax2);
 double TAX_PLAN4 (double money3, double Ctax3);
 int choice = 0;
 double income = 0.0;
 double tax = 0.0;
 double tax1 = 0.0;
 double tax2 = 0.0;
 double tax3 = 0.0;

 int main()
 {
     while (true)
     {
         MENU();

         switch (choice)
         {
         case 1 :
            {
                TAX_PLAN1 (income, tax);
                break;
            }
         case 2 :
            {
                TAX_PLAN2 (income, tax1);
                break;
            }
         case 3 :
            {
                TAX_PLAN3 (income, tax2);
                break;
            }
         case 4 :
            {
                TAX_PLAN4 (income, tax3);
                break;
            }
         case 5 :
            {
                QUIT();
                return 0;
            }
         }
     }

 }
 void MENU()
 {
     printf("************************************************************");
     printf("\nPlease enter your choice.\n");
     printf("(1) Single                     (2) Head of household\n");
     printf("(3) Married, jointly owned     (4) Married, divorced\n");
     printf("(5) Quit\n");
     printf("************************************************************\n");
     printf("Please enter your choice : ");
     scanf("%d",&choice);
     while (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5)
    {
        printf("Please enter the right choice:");
        scanf("%d",&choice);
    }
 }

 void QUIT()
 {
    printf("\t\t\n************************************************\t\t\n");
    printf("||                                            ||");
    printf("\n||                                            ||");
    printf("\n||      Thank you to use this programme!      ||");
    printf("\n||                                            ||");
    printf("\n||                                            ||");
    printf("\t\t\n************************************************\t\t\n");
 }

 double TAX_PLAN1 (double money, double Ctax)
 {
     double income, tax;
     income = tax = 0;
     printf("Please enter your income (<= 0 to quit) : ");
     while (scanf("%lf",&income) == 1 && income > 0)
     {
         if (income <= Choice1)
         {
             tax = income * TAX1;
             printf("This is your tax : %g$\n",tax); break;
         }
         else
         {
             tax = (Choice1 * TAX1)+(income - Choice1) * TAX2;
             printf("This is your tax : %g$\n",tax); break;
         }
      }
  }

  double TAX_PLAN2 (double money1, double Ctax1)
  {
     double income, tax1;
     income = tax1 = 0;
     printf("Please enter your income (<= 0 to quit) : ");
     while (scanf("%lf",&income) == 1 && income > 0)
     {
         if (income <= Choice2)
         {
             tax1 = income * TAX1;
             printf("This is your tax : %g$\n",tax1); break;
         }
         else
         {
             tax1 = (Choice2 * TAX1) + (income - Choice2) * TAX2;
             printf("This is your tax : %g$\n",tax1); break;
         }
     }
  }

  double TAX_PLAN3 (double money2, double Ctax2)
  {
     double income, tax2;
     income = tax2 = 0;
     printf("Please enter your income (<= 0 to quit) : ");
     while (scanf("%lf",&income) == 1 && income > 0)
     {
         if (income <= Choice3)
         {
             tax2 = income * TAX1;
             printf("This is your tax : %g$\n",tax2); break;
         }
         else
         {
             tax2 = (Choice3 * TAX1)+(income - Choice3) * TAX2;
             printf("This is your tax : %g$\n",tax2); break;
         }
     }
  }

  double TAX_PLAN4 (double money3, double Ctax3)
  {
     double income, tax3;
     income = tax3 = 0;
     printf("Please enter your income (<= 0 to quit) : ");
      while (scanf("%lf",&income) == 1 && income > 0)
      {
         if (income <= Choice4)
         {
             tax3 = income * TAX1;
             printf("This is your tax : %g$\n",tax3); break;
         }
         else
         {
             tax3 = (Choice4 * TAX1)+(income - Choice4) * TAX2;
             printf("This is your tax : %g$\n",tax3); break;
         }
      }
  }
/*
Ý”³ö˜ÓÀý

************************************************************
Please enter your choice.
(1) Single                     (2) Head of household
(3) Married, jointly owned     (4) Married, divorced
(5) Quit
************************************************************
Please enter your choice : 1
Please enter your income (<= 0 to quit) : 20000
This is your tax : 3279.5$
************************************************************
Please enter your choice.
(1) Single                     (2) Head of household
(3) Married, jointly owned     (4) Married, divorced
(5) Quit
************************************************************
Please enter your choice : 6
Please enter the right choice:2
Please enter your income (<= 0 to quit) : 35415
This is your tax : 6809.2$
************************************************************
Please enter your choice.
(1) Single                     (2) Head of household
(3) Married, jointly owned     (4) Married, divorced
(5) Quit
************************************************************
Please enter your choice : 5

************************************************
||                                            ||
||                                            ||
||      Thank you to use this programme!      ||
||                                            ||
||                                            ||
************************************************

*/
