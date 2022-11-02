/* 
* Compute the sum and average of two numbers.
*/

#include <stdio.h> // prinf, scanf definitions

int main(void)
{
    double one, two, // input - numbers to process
           sum, // output - sum of one and two
           average; // output - average of one and two

    /* Get two numbers */
    printf("Enter 1st number: ");
    scanf("%lf", &one);

    printf("Enter 2nd number: ");
    scanf("%lf", &two);

    /* Compute sum of numbers */
    sum = one + two;

    /* Compute average of numbers */
    average = sum / 2;

    /* Display sum and average */
    printf("The Sum = %.2lf\n", sum);
    printf("The Average = %.2lf\n", average);
}
