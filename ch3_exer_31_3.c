/*
* Compute an employee’s gross salary
*/

#include <stdio.h>

int main(void)
{
    double salary_per_hr, hr, ot,    // Input - Hourly Rate, Hours Worked.
           gross;    // Output - Total Salary Gross.

    /* Take Inputs */
    printf("Enter your salary/hour: ");
    scanf("%lf", &salary_per_hr);
    
    printf("Enter your worked hours: ");
    scanf("%lf", &hr);

    printf("Enter your overtime hours: ");
    scanf("%lf", &ot);
    
    /* Compute Gross Salary */
    gross = salary_per_hr * (hr + ot);

    /* Output Result */
    printf("Your expected salary = %.2lf$\n", gross);

}
