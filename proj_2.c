/*
* HYDROELECTRIC DAM POWER CALCULATOR
* 
* 1) Take Input: Water volume per Second
* 2) Take Input: Height of the dam
* 
*   3) Calculate Mass
*   4) Apply Formula "w=mgh"
*   5) Convert to MegaWatts
* 
* 6) Output Result
*/

#include <stdio.h>

#define GRAVITY 9.80
#define WATT_TO_MEGA 1000000
#define EFFICIENCY 0.9
#define VOLUME_TO_MASS 1000

double input_height();
double input_water();

double calc_mass(double volume);
double formula(double mass, double height);
double convert(double watts);

int main(void)
{
    double volume,
           mass,
           height,
           watts,
           power;
    
    height = input_height();
    volume = input_water();
    
    mass = calc_mass(volume);
    watts = formula(mass, height);
    power = convert(watts);
    
    printf("Height: %.2lf\n", height);
    printf("Mass of water per second: %.2lf\n", mass);
    printf("The Dam will Generate %.2lf MegaWatts/second\n", power);
}

double input_height()
{
    double i;

    printf("Insert Height of The Dam => "); // Prompts For 1st Input
    scanf("%lf", &i); // Assign Input to Memory;

    return i;
}

double input_water()
{
    double i;

    printf("Insert Volume of Water => "); // Prompts For 2nd Input
    scanf("%lf", &i); // Assign Input to Memory;

    return i;
}

double calc_mass(double volume)
{
    double mass;

    mass = volume * VOLUME_TO_MASS;

    return mass;
}

double formula(double mass, double height)
{
    double watts;

    watts = mass * GRAVITY * height * EFFICIENCY;

    return watts;
}

double convert(double watts)
{
   double power;

    power = watts / WATT_TO_MEGA;

    return power;
}
