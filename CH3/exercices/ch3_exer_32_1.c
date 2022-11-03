#include <stdio.h>
#include <stdlib.h>

/* Global Variables */
    double x; // input - first variable
    double y; // input - second variable 
    double difference; // difference of variables
    double out; // output - final result

/* Functions Prototypes */
    void get_inputs();
    void calculate_output();

int main(void)
{
    get_inputs();
    calculate_output();
    
    printf("first var = %.2lf", x);
    printf("\nsecond var = %.2lf", y);
    printf("\ntheir absolue difference: (|x-y|)= %.2lf\n", out);
}

void get_inputs()
{
    printf("Enter first variable> ");
    scanf("%lf", &x);

    printf("Enter second variable> ");
    scanf("%lf", &y);
}


void calculate_output()
{
    difference = x - y;
    out = abs((int) difference);
}
