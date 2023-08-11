/*
    Author: Abdelrahman Kamal
    Program: Sales tax is collected from buyers and remitted to the government. A retailer
has to file a monthly sales tax report which lists the sales for the month and the amount of sales
tax collected, at both the county and state levels. Develop a program that will input the total col-
lections for a month, calculate the sales tax on the collections, and display the county and state
taxes. Assume that states have a 4% sales tax and counties have a 5% sales tax.
*/

#include <stdio.h>
#include <string.h>

int main(void)
{   
    float total_collections = 0.0, sales_tax = 0.0, state_sales_tax = 0.0, county_sales_tax = 0.0;
    char name_month [100], ch;
    while (1)
    {
        printf("%s", "Enter the total amount collected (-1 to quit): ");
        scanf("%f", &total_collections);
        if (total_collections == -1)    break;
        
        else
        {
            printf("%s","Enter the name of the month: ");
            scanf("%s", name_month);
            printf("Total Collections: %.2f\n", total_collections);
            sales_tax = total_collections / 1.09;
            printf("Sales Tax: %.2f\n", sales_tax);
            state_sales_tax = (sales_tax * 5.0) / 100.0;
            county_sales_tax = (sales_tax * 4.0) / 100.0;
            printf("State Sales Tax: %.2f\n", state_sales_tax);
            printf("County Sales Tax: %.2f\n", county_sales_tax);
            printf("Total Sales Tax Collected: %.2f\n", state_sales_tax + county_sales_tax);
        }
    }
    
    return 0;
}