/*
* Author: Om4rit0
* FAHERNHEIT TO CELSIUS
* 
* TODO:
*   1) Take Input: Temprature in Fahernheit
*   2) Convert to Celsius
*   3) Print Output
*/

#include <stdio.h>

double input_temp();
double convert(double temp);

int main(void)
{
    double i,
           theta;

    i = input_temp();
    printf("input is %.2lf fahrenheit\n", i);
    
    double foo = i - 32;
    double bar = 0.555555555;

    double fb = foo * bar;

    printf("Temprature in Celsius = %.2lf\n", fb);
}

double input_temp()
{
    double input;

    printf("Enter Temprature in Fahrenheit: ");
    scanf("%lf", &input);
    
    return input;
}
