/*
* Author: Om4rit0 - Omar Sherif
* 
* TODO
*   1) Take Input: Hours
*   2) Take Inpu: Minutes
* 
*       3) Convert min to hr and add sum
*       4) Apply formula [T = ((4*t*t) / (t + 2)) - 20]
*       
*   5) Print Result
*/

#include <stdio.h>

double input_hours();
double input_minutes();
double time_sum(double hr, double min);

double foo(double time);

int main(void)
{
    
}

double input_hours()
{
    double hr;
    
    printf("How many hours since blackout: ");
    scanf("%lf", &hr);

    return hr;
}

double input_minutes()
{
    double min;
    
    printf("How many minutes since blackout: ");
    scanf("%lf", &min);

    return min;

}

double time_sum(double hr, double min)
{
    double time = hr + (min / 60);

    return time;
}

double foo(double time)
{
    double temp = ((4 * time * time) / (time + 2)) - 20;
    
    return temp;
}
