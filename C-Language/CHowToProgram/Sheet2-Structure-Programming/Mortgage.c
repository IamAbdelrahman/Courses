/*
    Author: Abdelrahman Kamal
    Program: Develop a C program to calculate the interest accrued on a bank customer's mortgage. 
    For each customer, the following facts are available:
    the account number, mortgage amount, mortgage term, interest rate
    The program should input each fact, calculate the total interest payable ( = mortgage amount
    × interest rate × mortgage term), and add it to the mortgage amount to get the total amount payable.
    It should calculate the required monthly payment by dividing the total amount payable by the
    number of months in the mortgage term. The program should display the required monthly payment 
    rounded off to the nearest dollar. The program should process each customer's account at a time.
*/

#include <stdio.h>
#include <math.h>
int main(void)
{   
    int account_number, mortgage_term;
    float mortgage_amount, interest_rate, total_interest_payable, monthly_payable_interest;

    while (1)
    {
        printf("Enter account number (-1 to quit): ");
        scanf("%d", &account_number);
        if (account_number == -1)   break;
        else
        {
            printf("Enter mortgage amount (in dollars): ");
            scanf("%f", &mortgage_amount);
            printf("Enter mortgage term (in years): ");
            scanf("%d", &mortgage_term);
            printf("Enter your interest rate (as a decimal): ");
            scanf("%f", &interest_rate);
            mortgage_amount += (mortgage_amount * mortgage_term * interest_rate);
            total_interest_payable = mortgage_amount;
            monthly_payable_interest = ceil(total_interest_payable / (12.0 * mortgage_term));
            printf("The monthly payable interest : %.2f\n",monthly_payable_interest);
        }
    }
    return 0;
}