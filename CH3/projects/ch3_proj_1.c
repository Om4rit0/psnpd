/*
 * This is a program to calculate the monthly payment of a loan
 * 
 * Inputs:-
 *  1) Loan amount [P]
 *  2) Annual interest rate [12i]
 *  3) Total number of payments [n]
 *  4) Down payment [p]
 *  
 *  Outputs:-
 *  1) payment
 *  2) Loan amount
 *
 *  Formula: payment = (i(P-p))/ (1 - (1+i)^(-n))
 */

#include <stdio.h>
#include <math.h>

/* Input Global Variables */
double loan_amount;
double annual_rate;
int number_of_payments;
double down_payment;

/* Output Global Variables */
double payment;

/* Auxiliry Variables*/
double monthly_rate;
double principal;

/* Function Prototypes */
void get_inputs();
void set_auxiliries();
void set_payment();

int main(void)
{
    get_inputs();
    set_auxiliries();
    set_payment();

    printf("Average Monthly Payment is %.2lf$\n", payment);
    printf("Principal is %.2lf\n", principal);

}

void get_inputs()
{
    printf("Enter the total loan amount> ");
    scanf("%lf", &loan_amount);

    printf("Enter the annual interest rate> ");
    scanf("%lf", &annual_rate);
    
    printf("Enter the number of payments> ");
    scanf("%i", &number_of_payments);
    
    printf("Enter the value of down payment> ");
    scanf("%lf", &down_payment);
}    
void set_auxiliries()
{
    monthly_rate = annual_rate / 12;
    principal = loan_amount - down_payment;
}

void set_payment()
{
    payment = (monthly_rate * principal)/(1 - (ldexp((1 + monthly_rate), -number_of_payments)));
}    
